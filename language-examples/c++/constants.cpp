#include <iostream>

constexpr int CONSTEXPR = 2 * 2;
const int CONSTANT_VALUE = CONSTEXPR;
int const* CONSTANT_ADDRESS = &CONSTEXPR;
const int* const CONSTANT_VALUE_AND_ADDRESS = &CONSTEXPR;

class ConstClass
{
	private:
		int data = 400;

	public:
		const int& ConstMethod() const
		{
			return data;
		}
};

int main()
{
	ConstClass const_object;

	std::cout << "Value of ConstClass data: " << const_object.ConstMethod() << '\n';
	std::cout << "Value of CONSTEXPR: " << CONSTEXPR << '\n';
	std::cout << "Value of CONSTANT_VALUE: " << CONSTANT_VALUE << '\n';
	std::cout << "Address of CONSTANT_ADDRESS: " << CONSTANT_ADDRESS << '\n';
	std::cout << "Value of CONSTANT_VALUE_AND_ADDRESS: " << *CONSTANT_VALUE_AND_ADDRESS << '\n';
	std::cout << "Address of CONSTANT_VALUE_AND_ADDRESS: " << CONSTANT_VALUE_AND_ADDRESS << '\n';
}