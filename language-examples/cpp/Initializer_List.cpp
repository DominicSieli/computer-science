#include <iostream>
#include <initializer_list>

template<typename T>
void Print(const std::initializer_list<T>& list)
{
	for(T x : list)
	{
		std::cout << x << " ";
	}

	std::cout << '\n';
}

int main()
{
	Print<int>({1, 2, 3, 4});
}