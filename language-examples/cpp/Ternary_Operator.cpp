#include <iostream>

bool is_true = (1 > 0) ? true : false;
bool is_false = (1 < 0) ? true : false;

int main()
{
	std::cout << std::boolalpha;
	std::cout << is_true << '\n';
	std::cout << is_false << '\n';
}