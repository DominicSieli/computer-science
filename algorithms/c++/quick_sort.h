#ifndef QUICK_SORT
#define QUICK_SORT

#include <vector>

namespace Algorithms
{
	template<typename T>
		unsigned int Partition(std::vector<T>& vector, unsigned int start, unsigned int end)
		{
			T pivot = vector[start];
			unsigned int median = start;

			for(unsigned int i = start; i < end; i++)
			{
				median++;
				if(vector[i] < pivot) std::swap(vector[i], vector[median]);
			}

			std::swap(vector[start], vector[median]);
			return median;
		}

	template<typename T>
		void QuickSort(std::vector<T>& vector, unsigned int start, unsigned int end)
		{
			if(start < end)
			{
				unsigned int pivot = Partition(vector, start, end);

				QuickSort(vector, start, pivot - 1);
				QuickSort(vector, pivot + 1, end);
			}
		}
}

#endif