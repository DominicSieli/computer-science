#pragma once
#include <vector>

namespace Algorithms
{
	template<typename T>
	void Merge(std::vector<T>& vector, unsigned int start, unsigned int middle, unsigned int end)
	{
		unsigned int index = 0;
		unsigned int left = start;
		unsigned int right = middle + 1;
		unsigned int segment = (end - start) + 1;

		std::vector<T> auxiliary(segment);

		while(left <= middle && right <= end)
		{
			if(vector[left] <= vector[right]) auxiliary[index++] = vector[left++];
			else auxiliary[index++] = vector[right++];
		}

		while(left <= middle)
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
	void MergeSort(std::vector<T>& vector, unsigned int start, unsigned int end)
	{
		if(start < end)
		{
			unsigned int middle = (start + end) / 2;

			MergeSort(vector, start, middle);
			MergeSort(vector, middle + 1, end);
			Merge(vector, start, middle, end);
		}
	}
}