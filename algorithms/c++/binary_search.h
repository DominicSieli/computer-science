#ifndef BINARY_SEARCH
#define BINARY_SEARCH

#include <vector>

namespace Algorithms
{
	template<typename T>
		int binary_search(std::vector<T>& vector, T target)
		{
			int left = 0;
			int median = 0;
			int right = vector.size() - 1;

			if(target < vector[left] || target > vector[right]) return -1;

			while(left <= right)
			{
				median = left + (right - left) / 2;

				if(vector[left] == target) return left;
				if(vector[right] == target) return right;
				if(vector[median] == target) return median;
				if(vector[median] < target) left = median + 1;
				if(vector[median] > target) right = median - 1;
			}

			return -1;
		}
}

#endif