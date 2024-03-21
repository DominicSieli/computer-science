#ifndef BUBBLE_SORT
#define BUBBLE_SORT

#include <vector>

namespace Algorithms
{
	template<typename T>
		void BubbleSort(std::vector<T>& vector)
		{
			bool sorted = false;

			if(vector.size() < 2) return;

			while(sorted == false)
			{
				sorted = true;

				for(unsigned int i = 0; i < vector.size() - 1; i++)
				{
					if(vector[i] > vector[i + 1])
					{
						sorted = false;
						std::swap(vector[i], vector[i + 1]);
					}
				}
			}
		}
}

#endif