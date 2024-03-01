#pragma once
#include <vector>

namespace Algorithms
{
	template<typename T>
	void NormalSort(std::vector<T>& vector)
	{
		if(vector.size() < 2) return;

		T min = vector[0];
		T max = vector[0];
		std::vector<T> normalVector(vector.size());

		for(unsigned int i = 0; i < vector.size(); i++)
		{
			if(vector[i] < min) min = vector[i];
			if(vector[i] > max) max = vector[i];
		}

		for(unsigned int i = 0; i < vector.size(); i++)
		{
			unsigned int index = ((float)(vector[i] - min) / (float)(max - min)) * (float)(vector.size() - 1);
			normalVector[index] = vector[i];
		}

		vector = normalVector;
	}
}