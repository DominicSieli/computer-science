#include <iostream>

int* int_pointer = new int(10);

int main()
{
	std::cout << "Value of int_pointer: " << *int_pointer << '\n';
	std::cout << "Address of int_pointer: " << int_pointer << '\n';

	delete int_pointer;
	int_pointer = nullptr;
}