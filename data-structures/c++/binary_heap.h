#ifndef BINARY_HEAP
#define BINARY_HEAP

#include <vector>
#include <bits/stdc++.h>
#include <initializer_list>

namespace DataStructures
{
	template<typename T>
		class BinaryHeap
		{
			private:
				unsigned int size = 0;
				std::vector<T> vector;

			public:
				BinaryHeap()
				{}

				BinaryHeap(const std::initializer_list<T>& list)
				{
					for(const T& data : list)
					{
						Insert(data);
					}
				}

				~BinaryHeap()
				{}

				T Max()
				{
					return vector[1];
				}

				bool Empty()
				{
					return size == 0;
				}

				void Insert(const T& data)
				{
					size++;
					if(size >= vector.size()) vector.push_back(0);
					vector[size] = data;
					ShiftUp(size);
				}

				T RemoveMax()
				{
					T max = vector[1];
					std::swap(vector[1], vector[size--]);
					ShiftDown(1);
					return max;
				}

			private:
				unsigned int p(unsigned int i) {return i >> 1;}
				unsigned int l(unsigned int i) {return i << 1;}
				unsigned int r(unsigned int i) {return (i << 1) + 1;}

				void ShiftUp(unsigned int index)
				{
					if(index == 1) return;

					if(vector[index] > vector[p(index)])
					{
						std::swap(vector[index], vector[p(index)]);
						ShiftUp(index);
					}
				}

				void ShiftDown(unsigned int index)
				{
					if(index > size) return;

					unsigned int swapIndex = index;

					if(l(index) <= size && vector[index] < vector[l(index)]) swapIndex = l(index);
					if(r(index) <= size && vector[swapIndex] < vector[r(index)]) swapIndex = r(index);

					if(swapIndex != index)
					{
						std::swap(vector[index], vector[swapIndex]);
						ShiftDown(swapIndex);
					}
				}
		};
}

#endif