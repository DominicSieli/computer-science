#ifndef INSERTION_SORT
#define INSERTION_SORT

#include <vector>

namespace Algorithms
{
	template<typename T>
		void insertion_sort(std::vector<T>& vector)
		{
			for(unsigned int i = 1; i < vector.size(); i++)
			{
				int j = i - 1;
				T key = vector[i];

				while(j >= 0 && vector[j] > key)
				{
					vector[j + 1] = vector[j];
					j--;
				}

				vector[j + 1] = key;
			}
		}
}

#endif