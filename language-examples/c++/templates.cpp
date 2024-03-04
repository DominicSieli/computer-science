#include <iostream>

template<typename T>
void Print(T input)
{
	std::cout << input << '\n';
}

int main()
{
	Print(2);
	Print('A');
	Print(2.2);
	Print("Dominic");
}