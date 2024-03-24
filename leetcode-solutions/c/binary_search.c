#include <stdio.h>

int binary_search(int* array, int size, int target)
{
	int left = 0;
	int median = 0;
	int right = size - 1;

	if(target < array[left] || target > array[right]) return -1;

	while(left <= right)
	{
		median = left + (right - left) / 2;

		if(array[left] == target) return left;
		else if(array[right] == target) return right;
		else if(array[median] == target) return median;
		else if(array[median] < target) left = median + 1;
		else if(array[median] > target) right = median - 1;
	}

	return -1;
}

int array[] = {2,4,8,16,32,64,128};
int size = sizeof(array) / sizeof(int);

int main()
{
	for(int i = 1; i <= 256; i *= 2)
	{
		printf("%d: %d\n", i, binary_search(array, size, i));
	}
}