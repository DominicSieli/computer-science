namespace Algorithms
{
	public static class CrossSort
	{
		public static void Sort(int[] array)
		{
			int j = 0;
			int left = 0;
			int right = array.Length - 1;
			bool sorted = false;

			while(sorted == false)
			{
				sorted = true;

				for(int i = left; i < right; i++)
				{
					j = (array.Length - i) - 1;

					if(i < j && array[i] > array[j])
					{
						sorted = false;
						int a = array[i];
						int b = array[j];
						array[i] = b;
						array[j] = a;
					}

					if(array[i] > array[i + 1])
					{
						sorted = false;
						int a = array[i];
						int b = array[i + 1];
						array[i] = b;
						array[i + 1] = a;
					}

					if(array[j] < array[j - 1])
					{
						sorted = false;
						int a = array[j];
						int b = array[j - 1];
						array[j] = b;
						array[j - 1] = a;
					}
				}

				left++;
				right--;
			}
		}
	}
}