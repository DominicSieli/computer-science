#ifndef MERGE_SORT
#define MERGE_SORT

#include <vector>

namespace Algorithms
{
	template<typename T>
	void merge(std::vector<T>& vector, unsigned int start, unsigned int median, unsigned int end)
	{
		unsigned int index = 0;
		unsigned int left = start;
		unsigned int right = median + 1;
		unsigned int size = (end - start) + 1;

		std::vector<T> segment(size);

		while(left <= median && right <= end)
		{
			if(vector[left] <= vector[right]) segment[index++] = vector[left++];
			else segment[index++] = vector[right++];
		}

		while(left <= median)
		{
			segment[index++] = vector[left++];
		}

		while(right <= end)
		{
			segment[index++] = vector[right++];
		}

		for(unsigned int i = 0; i < size; i++)
		{
			vector[start + i] = segment[i];
		}
	}

	template<typename T>
	void merge_sort(std::vector<T>& vector, unsigned int start, unsigned int end)
	{
		if(start < end)
		{
			unsigned int median = (start + end) / 2;

			merge_sort(vector, start, median);
			merge_sort(vector, median + 1, end);
			merge(vector, start, median, end);
		}
	}
}

#endif