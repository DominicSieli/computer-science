using System.Linq;

namespace Algorithms
{
	public static class CountingSort
	{
		public static void Sort(int[] array)
		{
			int min = array.Min();
			int max = array.Max();
			int range = (max - min) + 1;
			int[] count = new int[range];
			int[] sortedArray = new int[array.Length];

			for(int i = 0; i < array.Length; i++) count[array[i] - min]++;
			for(int i = 1; i < count.Length; i++) count[i] += count[i - 1];

			for(int i = array.Length - 1; i >= 0; i--)
			{
				sortedArray[count[array[i] - min] - 1] = array[i];
				count[array[i] - min]--;
			}

			for(int i = 0; i < array.Length; i++)
			{
				array[i] = sortedArray[i];
			}
		}
	}
}