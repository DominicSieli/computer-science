#include <iostream>

enum : unsigned short
{
	Anonymous_0,
	Anonymous_1,
	Anonymous_2
};

enum Enum : unsigned short
{
	Enum_0,
	Enum_1,
	Enum_2
};

enum class Enum_Class : unsigned short
{
	Enum_Class_0,
	Enum_Class_1,
	Enum_Class_2
};

int main()
{
	unsigned short enumeration = 0;
	Enum_Class enum_Class = (Enum_Class)enumeration;

	switch(enum_Class)
	{
		case Enum_Class::Enum_Class_0 : std::cout << "Loaded Data 0" << '\n';
		break;

		case Enum_Class::Enum_Class_1 : std::cout << "Loaded Data 1" << '\n';
		break;

		case Enum_Class::Enum_Class_2 : std::cout << "Loaded Data 2" << '\n';
		break;

		default : break;
	}
}