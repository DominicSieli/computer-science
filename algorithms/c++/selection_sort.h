#ifndef SELECTION_SORT
#define SELECTION_SORT

#include <vector>

namespace Algorithms
{
	template<typename T>
	void selection_sort(std::vector<T>& vector)
	{
		unsigned int min = 0;

		for(unsigned int i = 0; i < vector.size(); i++)
		{
			min = i;

			for(unsigned int j = i + 1; j < vector.size(); j++)
			{
				if(vector[j] < vector[min]) min = j;
			}

			std::swap(vector[i], vector[min]);
		}
	}
}

#endif