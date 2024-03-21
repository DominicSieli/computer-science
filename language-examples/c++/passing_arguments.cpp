#include <iostream>

void PassCopy(int i)
{
	std::cout << "PassCopy: " << i << '\n';
}

void PassPointer(int* i)
{
	std::cout << "PassPointer: " << *i << '\n';
}

void PassReference(int& i)
{
	std::cout << "PassReference: " << i << '\n';
}

int main()
{
	int* i = new int(20);

	PassCopy(*i);
	PassPointer(i);
	PassReference(*i);

	delete i;
	i = nullptr;
}