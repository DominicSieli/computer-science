#include <iostream>

constexpr int CONSTEXPR = 2 * 2;
const int CONSTANT_VALUE = CONSTEXPR;
int const* CONSTANT_ADDRESS = &CONSTEXPR;
const int* const CONSTANT_VALUE_AND_ADDRESS = &CONSTEXPR;

class Const_Class
{
private:
	int data = 400;

public:
	const int& Const_Method() const
	{
		return this->data;
	}
};

int main()
{
	Const_Class const_Class;

	std::cout << "Value of Const_Class data: " << const_Class.Const_Method() << '\n';
	std::cout << "Value of CONSTEXPR: " << CONSTEXPR << '\n';
	std::cout << "Value of CONSTANT_VALUE: " << CONSTANT_VALUE << '\n';
	std::cout << "Address of CONSTANT_ADDRESS: " << CONSTANT_ADDRESS << '\n';
	std::cout << "Value of CONSTANT_VALUE_AND_ADDRESS: " << *CONSTANT_VALUE_AND_ADDRESS << '\n';
	std::cout << "Address of CONSTANT_VALUE_AND_ADDRESS: " << CONSTANT_VALUE_AND_ADDRESS << '\n';
}