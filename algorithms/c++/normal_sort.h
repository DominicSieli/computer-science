#ifndef NORMAL_SORT
#define NORMAL_SORT

#include <vector>

namespace Algorithms
{
	template<typename T>
		void normal_sort(std::vector<T>& vector)
		{
			if(vector.size() < 2) return;

			T min = vector[0];
			T max = vector[0];
			std::vector<T> sorted_vector(vector.size());

			for(unsigned int i = 0; i < vector.size(); i++)
			{
				if(vector[i] < min) min = vector[i];
				if(vector[i] > max) max = vector[i];
			}

			for(unsigned int i = 0; i < vector.size(); i++)
			{
				unsigned int index = ((float)(vector[i] - min) / (float)(max - min)) * (float)(vector.size() - 1);
				sorted_vector[index] = vector[i];
			}

			vector = sorted_vector;
		}
}

#endif