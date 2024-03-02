#include <stdio.h>
#include <stdlib.h>

static int RemoveDuplicates(int* array, int size)
{
	int c = 0;
	int k = size;

	for(int i = 0; i < size; i++)
	{
		if(i != c && array[i] == array[c]) k--;

		if(array[i] > array[c])
		{
			c++;
			array[c] = array[i];
		}
	}

	return k;
}

int main()
{
	int size = 10;
	int* array = (int*)malloc(sizeof(int) * size);

	array[0] = 1;
	array[1] = 1;
	array[2] = 1;
	array[3] = 1;
	array[4] = 2;
	array[5] = 2;
	array[6] = 2;
	array[7] = 3;
	array[8] = 3;
	array[9] = 3;

	int k = RemoveDuplicates(array, size);

	for(int i = 0; i < k; i++)
	{
		printf("%d\n", array[i]);
	}
}
