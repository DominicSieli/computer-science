#ifndef ARRAY
#define ARRAY

#include <bits/stdc++.h>
#include <initializer_list>

namespace data_structures
{
	template<typename T, unsigned long long S>
		class Array
		{
			private:
				T array[S] {};
				unsigned long long count = 0;

			public:
				Array()
				{}

				Array(const T& data)
				{
					Fill(data);
				}

				Array(const std::initializer_list<T>& list)
				{
					for(const T& data : list)
					{
						Add(data);
					}
				}

				~Array()
				{}

				T& operator[](const unsigned long long& index)
				{
					return array[index];
				}

				constexpr T operator[](const unsigned long long& index) const
				{
					return array[index];
				}

				void operator=(const std::initializer_list<T>& list)
				{
					Clear();

					for(const T& data : list)
					{
						Add(data);
					}
				}

				constexpr unsigned long long Size() const
				{
					return S;
				}

				constexpr unsigned long long Count() const
				{
					return count;
				}

				void Fill(const T& data)
				{
					count = S;

					for(unsigned long long index = 0; index < S; index++)
					{
						array[index] = data;
					}
				}

				void Clear()
				{
					count = 0;

					for(unsigned long long index = 0; index < S; index++)
					{
						array[index] = {};
					}
				}

				void Add(const T& data)
				{
					if(count < S)
					{
						count++;
						array[count - 1] = data;
					}
				}

				void Remove(const unsigned long long& index)
				{
					if(index >= 0 && index < count)
					{
						count--;
						array[index] = {};
						std::swap(array[index], array[count]);
					}
				}

				void Reverse()
				{
					for(unsigned long long i = 0; i < count / 2; i++)
					{
						std::swap(array[i], array[(count - 1) - i]);
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
						if(array[left] <= array[right]) segment[index++] = array[left++];
						else segment[index++] = array[right++];
					}

					while(left <= median)
					{
						segment[index++] = array[left++];
					}

					while(right <= end)
					{
						segment[index++] = array[right++];
					}

					for(unsigned int i = 0; i < size; i++)
					{
						array[start + i] = segment[i];
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