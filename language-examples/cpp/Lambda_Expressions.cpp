#include <iostream>
#include <functional>

auto Square = [](int n)->int {return n*n;};

void Print_Square(int n, std::function<int(int)> func)
{
	std::cout << func(n) << '\n';
}

int main()
{
	int n = 10;

	Print_Square(n, Square);
	std::cout << Square(n) << '\n';
	[=](int n) {std::cout << n*n << '\n';}(n);
	[&](int n) {std::cout << n*n << '\n';}(n);
}