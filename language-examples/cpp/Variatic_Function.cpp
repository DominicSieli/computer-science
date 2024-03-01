#include <cstdarg>
#include <iostream>

void Variatic_Function(unsigned int n, ...)
{
	va_list list;
	va_start(list, n);

	for(unsigned int i = 0; i < n; i++)
	{
		std::cout << va_arg(list, int) << " ";
	}

	va_end(list);

	std::cout << '\n';
}

int main()
{
	Variatic_Function(6,1,2,3,4,5,6);
}