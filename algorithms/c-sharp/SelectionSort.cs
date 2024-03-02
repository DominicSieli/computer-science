using System.Collections.Generic;

namespace Algorithms
{
	public static class SelectionSort
	{
		public static void Sort(int[] array)
		{
			int minIndex = 0;

			for(int i = 0; i < array.Length; i++)
			{
				minIndex = i;

				for(int j = i + 1; j < array.Length; j++)
				{
					if(array[j] < array[minIndex]) minIndex = j;
				}

				int a = array[i];
				int b = array[minIndex];
				array[i] = b;
				array[minIndex] = a;
			}
		}
	}
}