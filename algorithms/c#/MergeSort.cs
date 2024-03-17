namespace Algorithms
{
	public static class MergeSort
	{
		private static void merge(int[] array, int start, int median, int end)
		{
			int index = 0;
			int left = start;
			int right = median + 1;
			int segment = (end - start) + 1;

			int[] auxiliary = new int[segment];

			while(left <= median && right <= end)
			{
				if(array[left] <= array[right]) auxiliary[index++] = array[left++];
				else auxiliary[index++] = array[right++];
			}

			while(left <= median)
			{
				auxiliary[index++] = array[left++];
			}

			while(right <= end)
			{
				auxiliary[index++] = array[right++];
			}

			for(int i = 0; i < segment; i++)
			{
				array[start + i] = auxiliary[i];
			}
		}

		public static void sort(int[] array, int start, int end)
		{
			if(start < end)
			{
				int median = (start + end) / 2;

				sort(array, start, median);
				sort(array, median + 1, end);
				merge(array, start, median, end);
			}
		}
	}
}