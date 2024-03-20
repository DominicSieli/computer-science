using System;

namespace DataStructures
{
	public class DynamicArray<T> where T : IComparable
	{
		private long size = 0;
		private long count = 0;
		private T[] array = null;

		public DynamicArray()
		{}

		public DynamicArray(T[] list)
		{
			size = list.Length;
			count = list.Length;
			array = new T[list.Length];

			for(int i = 0; i < list.Length; i++)
			{
				array[i] = list[i];
			}
		}

		public DynamicArray(long startSize = 0, T data = default(T))
		{
			size = startSize;
			array = new T[startSize];
			Fill(data);
		}

		~DynamicArray()
		{
			Delete();
		}

		public T this[long i]
		{
			get { return array[i]; }
			set { array[i] = value; }
		}

		public long Size()
		{
			return size;
		}

		public long Count()
		{
			return count;
		}

		public void Fill(T data)
		{
			count = size;

			for(long index = 0; index < size; index++)
			{
				array[index] = data;
			}
		}

		public void Clear()
		{
			count = 0;

			for(long index = 0; index < size; index++)
			{
				array[index] = default(T);
			}
		}

		public void Delete()
		{
			size = 0;
			count = 0;
			array = null;
		}

		public void Trim()
		{
			size = count;

			var newVector = new T[size];

			for(long index = 0; index < count; index++)
			{
				newVector[index] = array[index];
			}

			array = newVector;
		}

		public void Add(T data, long expansion = 1)
		{
			count++;

			if(count > size)
			{
				size += expansion;
				var newVector = new T[size];

				for(long index = 0; index < count; index++)
				{
					newVector[index] = array[index];
				}

				array = newVector;
			}

			array[count - 1] = data;
		}

		public void Remove(long index)
		{
			if(index >= 0 && index < count)
			{
				count--;
				array[index] = default(T);
				T data1 = array[index];
				T data2 = array[count];
				array[count] = data1;
				array[index] = data2;
			}
		}

		public void Reverse()
		{
			for(long index = 0; index < count / 2; index++)
			{
				T data1 = array[index];
				T data2 = array[(count - 1) - index];
				array[(count - 1) - index] = data1;
				array[index] = data2;
			}
		}

		public void Sort()
		{
			MergeSort(0, array.Length - 1);
		}

		private void Merge(int start, int median, int end)
		{
			int index = 0;
			int left = start;
			int right = median + 1;
			int size = (end - start) + 1;

			T[] segment = new T[size];

			while(left <= median && right <= end)
			{
				if(array[left].CompareTo(array[right]) <= 0) segment[index++] = array[left++];
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

			for(int i = 0; i < size; i++)
			{
				array[start + i] = segment[i];
			}
		}

		private void MergeSort(int start, int end)
		{
			if(start < end)
			{
				int median = (start + end) / 2;

				MergeSort(start, median);
				MergeSort(median + 1, end);
				Merge(start, median, end);
			}
		}
	}
}