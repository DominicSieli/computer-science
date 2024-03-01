#include <iostream>

unsigned int Factorial(unsigned int n)
{
	return (n < 2) ? 1 : n * Factorial(n - 1);
}

unsigned int Fibonacci(unsigned int n)
{
	return (n < 2) ? n : Fibonacci(n - 1) + Fibonacci(n - 2);
}

int main()
{
	std::cout << Factorial(5) << '\n';
	std::cout << Fibonacci(8) << '\n';
}