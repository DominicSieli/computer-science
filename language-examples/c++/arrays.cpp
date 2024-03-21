#include <iostream>

const unsigned int x = 4;
const unsigned int y = 2;

int main()
{
	int stack_1d[x];
	int stack_2d[x][y];
	auto heap_1d = new int[x];
	auto heap_2d = new int[x][y];

	for(unsigned int i = 0; i < x; i++) heap_1d[i] = i;
	for(unsigned int i = 0; i < x; i++) stack_1d[i] = i;
	for(unsigned int i = 0; i < x; i++) {heap_2d[i][0] = i; heap_2d[i][1] = i;}
	for(unsigned int i = 0; i < x; i++) {stack_2d[i][0] = i; stack_2d[i][1] = i;}

	std::cout << "Stack 1D\n";

	for(unsigned int i = 0; i < x; i++)
	{
		printf("[%d]\n", stack_1d[i]);
	}

	std::cout << "\nHeap 1D\n";

	for(unsigned int i = 0; i < x; i++)
	{
		printf("[%d]\n", heap_1d[i]);
	}

	std::cout << "\nStack 2D\n";

	for(unsigned int i = 0; i < x; i++)
	{
		printf("[%d][%d]\n", stack_2d[i][0], stack_2d[i][1]);
	}

	std::cout << "\nHeap 2D\n";

	for(unsigned int i = 0; i < x; i++)
	{
		printf("[%d][%d]\n", heap_2d[i][0], heap_2d[i][1]);
	}

	delete[] heap_1d; heap_1d = nullptr;
	delete[] heap_2d; heap_2d = nullptr;
}