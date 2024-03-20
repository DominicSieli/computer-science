#ifndef VECTOR
#define VECTOR

#include <bits/stdc++.h>
#include <initializer_list>

namespace DataStructures
{
	template<typename T>
		class Vector
		{
			private:
				T* vector = nullptr;
				unsigned long long size = 0;
				unsigned long long count = 0;

			public:
				Vector(const unsigned long long& startSize = 0, const T& data = {})
				{
					size = startSize;
					vector = new T[startSize];
					Fill(data);
				}

				Vector(const std::initializer_list<T>& list) : vector{new T[list.size()]}, size{list.size()}, count{0}
				{
					for(const T& data : list)
					{
						Add(data);
					}
				}

				Vector(const Vector& copy) : vector{new T[copy.size]}, size{copy.size}, count{copy.count}
				{
					for(unsigned long long index = 0; index < size; index++)
					{
						vector[index] = copy[index];
					}
				}

				~Vector()
				{
					delete[] vector;
					vector = nullptr;
				}

				T& operator[](const unsigned long long& index)
				{
					return vector[index];
				}

				constexpr T operator[](const unsigned long long& index) const
				{
					return vector[index];
				}

				void operator=(const std::initializer_list<T>& list)
				{
					Delete();

					for(const T& data : list)
					{
						Add(data);
					}
				}

				constexpr unsigned long long Size() const
				{
					return size;
				}

				constexpr unsigned long long Count() const
				{
					return count;
				}

				void Fill(const T& data)
				{
					count = size;

					for(unsigned long long index = 0; index < size; index++)
					{
						vector[index] = data;
					}
				}

				void Clear()
				{
					count = 0;

					for(unsigned long long index = 0; index < size; index++)
					{
						vector[index] = {};
					}
				}

				void Delete()
				{
					size = 0;
					count = 0;
					delete[] vector;
					vector = nullptr;
				}

				void Trim()
				{
					size = count;

					T* newVector = new T[size];

					for(unsigned long long index = 0; index < count; index++)
					{
						newVector[index] = vector[index];
					}

					delete[] vector;
					vector = newVector;
				}

				void Add(const T& data, const unsigned long long& expansion = 1)
				{
					count++;

					if(count > size)
					{
						size += expansion;
						T* newVector = new T[size];

						for(unsigned long long index = 0; index < count; index++)
						{
							newVector[index] = vector[index];
						}

						delete[] vector;
						vector = newVector;
					}

					vector[count - 1] = data;
				}

				void Remove(const unsigned long long& index)
				{
					if(index >= 0 && index < count)
					{
						count--;
						vector[index] = {};
						std::swap(vector[index], vector[count]);
					}
				}

				void Reverse()
				{
					for(unsigned long long index = 0; index < count / 2; index++)
					{
						std::swap(vector[index], vector[(count - 1) - index]);
					}
				}

				void Sort()
				{
					MergeSort(0, count - 1);
				}

			private:
				void Merge(unsigned int start, unsigned int median, unsigned int end)
				{
					unsigned int index = 0;
					unsigned int left = start;
					unsigned int right = median + 1;
					unsigned int size = (end - start) + 1;
					T segment[size] {};


					while(left <= median && right <= end)
					{
						if(vector[left] <= vector[right]) segment[index++] = vector[left++];
						else segment[index++] = vector[right++];
					}

					while(left <= median)
					{
						segment[index++] = vector[left++];
					}

					while(right <= end)
					{
						segment[index++] = vector[right++];
					}

					for(unsigned int i = 0; i < size; i++)
					{
						vector[start + i] = segment[i];
					}
				}

				void MergeSort(unsigned int start, unsigned int end)
				{
					if(start < end)
					{
						unsigned int median = (start + end) / 2;

						MergeSort(start, median);
						MergeSort(median + 1, end);
						Merge(start, median, end);
					}
				}
		};
}

#endif