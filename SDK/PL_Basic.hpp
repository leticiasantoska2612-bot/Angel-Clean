#pragma once

// Paladins (8.1.5838.0) SDK

#include <unordered_set>
#include <string>
#include <locale>
#include "../utils/TEB.h"

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

namespace SDK
{

template<typename Fn>
inline Fn GetVFunction(const void *instance, std::size_t index)
{
	auto vtable = *reinterpret_cast<const void***>(const_cast<void*>(instance));
	return reinterpret_cast<Fn>(vtable[index]);
}

template<class T>
struct TArray
{
	friend struct FString;

public:
	inline TArray()
	{
		Data = nullptr;
		Count = Max = 0;
	};

	inline size_t Num() const
	{
		return Count;
	};

	inline T& operator[](size_t i)
	{
		if (i >= (size_t)Count || !Data) {
			static T dummy{};
			return dummy;
		}
		return Data[i];
	};

	inline const T& operator[](size_t i) const
	{
		return Data[i];
	};

	inline bool IsValidIndex(size_t i) const
	{
		return i < Num();
	}

	inline T& GetByIndex(size_t i)
	{
		return Data[i];
	}

	inline const T& GetByIndex(size_t i) const
	{
		return Data[i];
	}

private:
	T* Data;
	int32_t Count;
	int32_t Max;
};

template<class T>
struct TAntiCheatArray
{
	friend struct FString;
private:
	uintptr_t Decrypt(size_t i) {
		return reinterpret_cast<uintptr_t>(Data[i]) ^ GetXorKey(i);
	}

	T GetData(size_t i) {
		return reinterpret_cast<T>(Decrypt(i));
	}

public:
	TAntiCheatArray()
	{
		Data = nullptr;
		Count = Unk00 = 0;
	};

	size_t Num() const
	{
		return Count;
	};

	T operator[](size_t i)
	{
		if (i >= Num())
			return nullptr;
		return GetData(i);
	};

	T GetByIndex(size_t i)
	{
		return GetData(i);
	}

	bool IsValidIndex(size_t i)
	{
		uintptr_t addr = Decrypt(i);
		if (addr == NULL || IsBadReadPtr((void*)addr, 1))
			return false;
		return i < Num();
	}

private:
	T* Data;
	__int32 Unk00;
	__int32 Count;
};

struct FString : private TArray<wchar_t>
{
	inline FString()
	{
	}

	FString(const wchar_t* other)
	{
		if (other && !IsBadReadPtr(other, 2)) {
			// Safety: Use wcsnlen with a reasonable cap to avoid runaway wcslen on non-terminated strings
			Count = (int32_t)wcsnlen(other, 1024) + 1;
			Max = Count;
			Data = const_cast<wchar_t*>(other);
		} else {
			Data = nullptr;
			Count = Max = 0;
		}
	};

	inline bool IsValid() const
	{
		return Data != nullptr;
	}

	inline const wchar_t* c_str() const
	{
		return Data;
	}

	std::string ToString() const
	{
		if (!Data || Count <= 0 || IsBadReadPtr(Data, 2))
			return "";

		// Safety: Find actual length within Count-specified range to avoid wcslen running into unallocated memory
		size_t length = 0;
		while (length < (size_t)Count && Data[length] != L'\0')
		{
			length++;
		}

		if (length == 0)
			return "";

		std::string str(length, '\0');
		std::use_facet<std::ctype<wchar_t>>(std::locale()).narrow(Data, Data + length, '?', &str[0]);

		return str;
	}
};

template<class TEnum>
class TEnumAsByte
{
public:
	inline TEnumAsByte()
	{
	}

	inline TEnumAsByte(TEnum _value)
		: value(static_cast<uint8_t>(_value))
	{
	}

	explicit inline TEnumAsByte(int32_t _value)
		: value(static_cast<uint8_t>(_value))
	{
	}

	explicit inline TEnumAsByte(uint8_t _value)
		: value(_value)
	{
	}

	inline operator TEnum() const
	{
		return (TEnum)value;
	}

	inline TEnum GetValue() const
	{
		return (TEnum)value;
	}

private:
	uint8_t value;
};

class FNameEntry
{
	static const auto NAME_WIDE_MASK = 0x1;
	static const auto NAME_INDEX_SHIFT = 1;

public:
	uint64_t Flags;
	uint32_t Index;
	char UnknownData00[0x08];
	char Name[1024];

	int32_t GetIndex() const
	{
		return Index >> NAME_INDEX_SHIFT;
	}

	bool IsWide() const
	{
		return Index & NAME_WIDE_MASK;
	}

	const char* GetAnsiName() const
	{
		return Name;
	}

	std::string GetName() const
	{
		return Name;
	}
};

struct FName
{
	int32_t Index;
	int32_t Number;

	inline FName()
		: Index(0),
		  Number(0)
	{
	};

	inline FName(int32_t i)
		: Index(i),
		  Number(0)
	{
	};

	FName(const char* nameToFind)
		: Index(0),
		  Number(0)
	{
		static std::unordered_set<size_t> cache;

		for (auto i : cache)
		{
			if (GetGlobalNames()[i]->GetName() == nameToFind)
			{
				Index = i;
				
				return;
			}
		}

		for (auto i = 0u; i < GetGlobalNames().Num(); ++i)
		{
			if (GetGlobalNames()[i] != nullptr)
			{
				if (GetGlobalNames()[i]->GetName() == nameToFind)
				{
					cache.insert(i);

					Index = i;

					return;
				}
			}
		}
	};

	static TAntiCheatArray<FNameEntry*>* GNames;
	static inline TAntiCheatArray<FNameEntry*>& GetGlobalNames()
	{
		return *GNames;
	};

	inline std::string GetName() const
	{
		if (Index < 0 || Index >= GetGlobalNames().Num())
			return "None";

		auto entry = GetGlobalNames()[Index];
		if (entry && !IsBadReadPtr(entry, sizeof(FNameEntry)))
		{
			return entry->GetName();
		}

		return "None";
	};

	inline bool operator==(const FName& other) const
	{
		return Index == other.Index;
	};
};

class UObject;

class FScriptInterface
{
private:
	UObject* ObjectPointer;
	void* InterfacePointer;

public:
	inline UObject* GetObject() const
	{
		return ObjectPointer;
	}

	inline UObject*& GetObjectRef()
	{
		return ObjectPointer;
	}

	inline void* GetInterface() const
	{
		return ObjectPointer != nullptr ? InterfacePointer : nullptr;
	}
};

template<class InterfaceType>
class TScriptInterface : public FScriptInterface
{
public:
	inline InterfaceType* operator->() const
	{
		return (InterfaceType*)GetInterface();
	}

	inline InterfaceType& operator*() const
	{
		return *((InterfaceType*)GetInterface());
	}

	inline operator bool() const
	{
		return GetInterface() != nullptr;
	}
};

struct FScriptDelegate
{
	unsigned char UnknownData[0x10];
};
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
