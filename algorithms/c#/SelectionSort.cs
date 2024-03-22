namespace Algorithms
{
	public static class SelectionSort
	{
		public static void Sort(int[] array)
		{
			int min = 0;

			for(int i = 0; i < array.Length; i++)
			{
				min = i;

				for(int j = i + 1; j < array.Length; j++)
				{
					if(array[j] < array[min]) min = j;
				}

				int a = array[i];
				int b = array[min];
				array[i] = b;
				array[min] = a;
			}
		}
	}
}