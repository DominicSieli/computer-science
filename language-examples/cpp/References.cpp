#include <iostream>

int integer = 10;
int& reference = integer;
int&& r_value_reference = 2 + 2;

int main()
{
	std::cout << "Value of integer: " << reference << '\n';
	std::cout << "Address of integer: " << &reference << '\n';

	std::cout << '\n';

	std::cout << "Value of r_value_reference: " << r_value_reference << '\n';
	std::cout << "Address of r_value_reference: " << &r_value_reference << '\n';
}