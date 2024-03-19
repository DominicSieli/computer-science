namespace Algorithms
{
	public static class BubbleSort
	{
		public static void Sort(int[] array)
		{
			bool sorted = false;

			while(sorted == false)
			{
				sorted = true;

				for(int i = 0; i < array.Length - 1; i++)
				{
					if(array[i] > array[i + 1])
					{
						sorted = false;
						int i1 = array[i];
						int i2 = array[i + 1];
						array[i] = i2;
						array[i + 1] = i1;
					}
				}
			}
		}
	}
}