#include <iostream>

void Pass_Copy(int i)
{
	std::cout << "Pass_Copy: " << i << '\n';
}

void Pass_Pointer(int* i)
{
	std::cout << "Pass_Pointer: " << *i << '\n';
}

void Pass_Reference(int& i)
{
	std::cout << "Pass_Reference: " << i << '\n';
}

int main()
{
	int* i = new int(20);

	Pass_Copy(*i);
	Pass_Pointer(i);
	Pass_Reference(*i);

	delete i;
	i = nullptr;
}