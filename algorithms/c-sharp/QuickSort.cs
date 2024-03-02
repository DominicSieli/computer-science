using System.Collections.Generic;

namespace Algorithms
{
	public static class QuickSort
	{
		private static int Partition(int[] array, int startIndex, int endIndex)
		{
			int pivot = array[startIndex];
			int middleIndex = startIndex;

			for(int i = startIndex + 1; i <= endIndex; i++)
			{
				if(array[i] < pivot)
				{
					middleIndex++;
					int a = array[i];
					int b = array[middleIndex];
					array[i] = b;
					array[middleIndex] = a;
				}
			}

			int x = array[startIndex];
			int y = array[middleIndex];
			array[startIndex] = y;
			array[middleIndex] = x;

			return middleIndex;
		}

		public static void Sort(int[] array, int startIndex, int endIndex)
		{
			if(startIndex < endIndex)
			{
				int pivotIndex = Partition(array, startIndex, endIndex);

				Sort(array, startIndex, pivotIndex - 1);
				Sort(array, pivotIndex + 1, endIndex);
			}
		}
	}
}