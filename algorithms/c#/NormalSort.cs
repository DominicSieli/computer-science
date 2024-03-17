using System.Collections.Generic;

namespace Algorithms
{
	public static class NormalSort
	{
		public static void sort(int[] array)
		{
			int min = array[0];
			int max = array[0];
			int[] result = new int[array.Length];

			for(int i = 0; i < array.Length; i++)
			{
				if(array[i] < min) min = array[i];
				if(array[i] > max) max = array[i];
			}

			for(int i = 0; i < array.Length; i++)
			{
				int index = (int)(((float)(array[i] - min) / (float)(max - min)) * (array.Length - 1));
				result[index] = array[i];
			}

			for(int i = 0; i < array.Length; i++)
			{
				array[i] = result[i];
			}
		}
	}
}