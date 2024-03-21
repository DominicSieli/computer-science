#include <iostream>

enum : unsigned short
{
	ANONYMOUS_0,
	ANONYMOUS_1,
	ANONYMOUS_2
};

enum Enum : unsigned short
{
	ENUM_0,
	ENUM_1,
	ENUM_2
};

enum class EnumClass : unsigned short
{
	ENUM_0,
	ENUM_1,
	ENUM_2
};

int main()
{
	unsigned short enumeration = 0;
	EnumClass enum_class = (EnumClass)enumeration;

	switch(enum_class)
	{
		case EnumClass::ENUM_0 : std::cout << "Loaded Data 0" << '\n';
		break;

		case EnumClass::ENUM_1 : std::cout << "Loaded Data 1" << '\n';
		break;

		case EnumClass::ENUM_2 : std::cout << "Loaded Data 2" << '\n';
		break;

		default : break;
	}
}