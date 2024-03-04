#include <bitset>
#include <iomanip>
#include <iostream>

int main()
{
	for(unsigned int decimal = 0; decimal < 16; decimal++)
	{
		std::cout << "Decimal: " << std::dec << decimal << " = " << "Binary: " << "0b" << std::bitset<4>(decimal) << '\n';
	}

	std::cout << "\n";

	for(unsigned int decimal = 0; decimal < 16; decimal++)
	{
		std::cout << "Decimal: " << std::dec << decimal << " = " << "Octal: " << "0" << std::oct << decimal << '\n';
	}

	std::cout << "\n";

	for(unsigned int decimal = 0; decimal < 16; decimal++)
	{
		std::cout << "Decimal: " << std::dec << decimal << " = " << "Hexadecimal: " << "0x" << std::hex << decimal << '\n';
	}
}