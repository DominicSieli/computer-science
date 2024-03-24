#include <stdio.h>
#include <stdlib.h>

int* two_sum(int* array, int size, int target, int* return_size)
{
	int* results = (int*)malloc(sizeof(*return_size) * 2);

	for(int i = 0; i < size; i++)
	{
		for(int j = i + 1; j < size; j++)
		{
			if(array[i] + array[j] == target)
			{
				results[0] = i;
				results[1] = j;
				return results;
			}
		}
	}

	results[0] = 0;
	results[1] = 0;
	return results;
}

int main()
{
	int target = 26;
	int* return_size;
	const unsigned int size = 10;
	int* array = (int*)malloc(sizeof(int) * size);

	array[0] = 2;
	array[1] = 7;
	array[2] = 11;
	array[3] = 15;

	*return_size = 2;
	int* results = two_sum(array, size, target, return_size);


	printf("[%d][%d]\n", results[0], results[1]);
}