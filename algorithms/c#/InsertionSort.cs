namespace Algorithms
{
	public static class InsertionSort
	{
		public static void Sort(int[] array)
		{
			for(int i = 0; i < array.Length; i++)
			{
				int j = 0;
				int key = array[i];

				for(j = i - 1; j >= 0; j--)
				{
					if(array[j] > key) array[j + 1] = array[j];
					else break;
				}

				array[j + 1] = key;
			}
		}
	}
}