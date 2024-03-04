#include <iostream>

namespace NameSpace_1
{
	int data = 20;
}

namespace NameSpace_2
{
	int data = 40;
}

int main()
{
	std::cout << "NameSpace_1 data: " << NameSpace_1::data << '\n';
	std::cout << "NameSpace_2 data: " << NameSpace_2::data << '\n';
}