using System.Collections.Generic;

namespace Algorithms
{
	public static class BinarySearch
	{
		public static int Search(int[] array, int target)
		{
			int left = 0;
			int median = 0;
			int right = array.Length - 1;

			if(target < array[left] || target > array[right]) return -1;

			while(left <= right)
			{
				median = left + (right - left) / 2;

				if(array[left] == target) return left;
				if(array[right] == target) return right;
				if(array[median] == target) return median;
				if(array[median] < target) left = median + 1;
				if(array[median] > target) right = median - 1;
			}

			return -1;
		}
	}
}