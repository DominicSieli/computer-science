#pragma once
#include <vector>

namespace Algorithms
{
	template<typename T>
	void CountingSort(std::vector<T>& vector)
	{
		int min = vector[0];
		int max = vector[0];

		for(unsigned int i = 0; i < vector.size(); i++)
		{
			if(vector[i] > max) max = vector[i];
			if(vector[i] < min) min = vector[i];
		}

		int range = (max - min) + 1;
		std::vector<int> count(range);
		std::vector<int> output(vector.size());

		for(unsigned int i = 0; i < vector.size(); i++) count[vector[i] - min]++;
		for(unsigned int i = 1; i < count.size(); i++) count[i] += count[i - 1];

		for(int i = vector.size() - 1; i >= 0; i--)
		{
			output[count[vector[i] - min] - 1] = vector[i];
			count[vector[i] - min]--;
		}

		vector = output;
	}
}