#include <memory>
#include <iostream>

int integer = 10;
int* pointer = &integer;
int** pointer_pointer = &pointer;
std::unique_ptr<int> unique_pointer = std::make_unique<int>(integer);
std::shared_ptr<int> shared_pointer = std::make_shared<int>(integer);

int main()
{
	std::cout << "Value of integer: " << *pointer << '\n';
	std::cout << "Address of integer: " << pointer << '\n';

	std::cout << '\n';

	std::cout << "Value of integer: " << **pointer_pointer << '\n';
	std::cout << "Address of integer: " << *pointer_pointer << '\n';

	std::cout << '\n';

	std::cout << "Value of integer: " << *unique_pointer << '\n';
	std::cout << "Address of integer: " << unique_pointer.get() << '\n';

	std::cout << '\n';

	std::cout << "Value of integer: " << *shared_pointer << '\n';
	std::cout << "Address of integer: " << shared_pointer.get() << '\n';
}