#include <bitset>
#include <iostream>

std::bitset<4> b_1010 = 0b1010;
std::bitset<4> b_0101 = 0b0101;
std::bitset<4> b_1100 = 0b1100;
std::bitset<4> b_0011 = 0b0011;

int main()
{
	std::cout << "NOT (~)" << '\n';
	std::cout << " " << b_1010 << '\n';
	std::cout << "=" << ~b_1010 << '\n';

	std::cout << '\n';

	std::cout << "AND (&)" << '\n';
	std::cout << " " << b_1010 << '\n';
	std::cout << " " << b_1100 << '\n';
	std::cout << "=" << (b_1010 & b_1100) << '\n';

	std::cout << '\n';

	std::cout << "OR (|)" << '\n';
	std::cout << " " << b_1010 << '\n';
	std::cout << " " << b_1100 << '\n';
	std::cout << "=" << (b_1010 | b_1100) << '\n';

	std::cout << '\n';

	std::cout << "XOR (^)" << '\n';
	std::cout << " " << b_1010 << '\n';
	std::cout << " " << b_1100 << '\n';
	std::cout << "=" << (b_1010 ^ b_1100) << '\n';

	std::cout << '\n';

	std::cout << "Shift Left by 1 (1010 << 1)" << '\n';
	std::cout << " " << b_1010 << '\n';
	std::cout << "=" << (b_1010 << 1) << '\n';

	std::cout << '\n';

	std::cout << "Shift Right by 1 (1010 >> 1)" << '\n';
	std::cout << " " << b_1010 << '\n';
	std::cout << "=" << (b_1010 >> 1) << '\n';
}