#include <iostream>

const unsigned int x = 4;
const unsigned int y = 2;

int main()
{
	int stack_1D[x];
	int stack_2D[x][y];
	auto heap_1D = new int[x];
	auto heap_2D = new int[x][y];

	for(unsigned int i = 0; i < x; i++) heap_1D[i] = i;
	for(unsigned int i = 0; i < x; i++) stack_1D[i] = i;
	for(unsigned int i = 0; i < x; i++) {heap_2D[i][0] = i; heap_2D[i][1] = i;}
	for(unsigned int i = 0; i < x; i++) {stack_2D[i][0] = i; stack_2D[i][1] = i;}

	std::cout << "Stack 1D\n";

	for(unsigned int i = 0; i < x; i++)
	{
		printf("[%d]\n", stack_1D[i]);
	}

	std::cout << "\nHeap 1D\n";

	for(unsigned int i = 0; i < x; i++)
	{
		printf("[%d]\n", heap_1D[i]);
	}

	std::cout << "\nStack 2D\n";

	for(unsigned int i = 0; i < x; i++)
	{
		printf("[%d][%d]\n", stack_2D[i][0], stack_2D[i][1]);
	}

	std::cout << "\nHeap 2D\n";

	for(unsigned int i = 0; i < x; i++)
	{
		printf("[%d][%d]\n", heap_2D[i][0], heap_2D[i][1]);
	}

	delete heap_1D; heap_1D = nullptr;
	delete heap_2D; heap_2D = nullptr;
}