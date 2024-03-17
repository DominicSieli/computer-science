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
		unsigned int segment = (end - start) + 1;

		std::vector<T> auxiliary(segment);

		while(left <= median && right <= end)
		{
			if(vector[left] <= vector[right]) auxiliary[index++] = vector[left++];
			else auxiliary[index++] = vector[right++];
		}

		while(left <= median)
		{
			auxiliary[index++] = vector[left++];
		}

		while(right <= end)
		{
			auxiliary[index++] = vector[right++];
		}

		for(unsigned int i = 0; i < segment; i++)
		{
			vector[start + i] = auxiliary[i];
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