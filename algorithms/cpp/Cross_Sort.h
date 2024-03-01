#pragma once
#include <vector>

namespace Algorithms
{
	template<typename T>
	void CrossSort(std::vector<T>& vector)
	{
		if(vector.size() < 2) return;

		unsigned int l = 0;
		unsigned int r = 0;
		unsigned int left = 0;
		unsigned int right = vector.size() - 1;

		while(left < right)
		{
			if(vector[left] > vector[right]) std::swap(vector[left], vector[right]);

			l = left;
			r = right;

			while(l < right)
			{
				if(vector[l] > vector[l + 1]) std::swap(vector[l], vector[l + 1]);
				if(vector[r] < vector[r - 1]) std::swap(vector[r], vector[r - 1]);

				l++;
				r--;
			}

			left++;
			right--;
		}
	}
}