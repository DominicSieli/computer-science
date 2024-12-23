#ifndef RADIX_SORT
#define RADIX_SORT

#include <queue>
#include <vector>

namespace Algorithms
{
	template<typename T>
		void radix_sort(std::vector<T>& vector)
		{
			T max = vector[0];
			std::vector<std::queue<T>> buckets(10);

			for(unsigned int i = 0; i < vector.size(); i++)
			{
				if(vector[i] > max) max = vector[i];
			}

			for(unsigned int exp = 1; max/exp > 0; exp *= 10)
			{
				for(unsigned int i = 0; i < vector.size(); i++)
				{
					buckets[(vector[i]/exp)%10].push(vector[i]);
				}

				unsigned int counter = 0;

				for(unsigned int i = 0; i < 10; i++)
				{
					while(buckets[i].empty() == false)
					{
						vector[counter++] = buckets[i].front();
						buckets[i].pop();
					}
				}
			}
		}
}

#endif