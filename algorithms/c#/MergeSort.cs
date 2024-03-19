namespace Algorithms
{
	public static class MergeSort
	{
		private static void Merge(int[] array, int start, int median, int end)
		{
			int index = 0;
			int left = start;
			int right = median + 1;
			int size = (end - start) + 1;

			int[] segment = new int[size];

			while(left <= median && right <= end)
			{
				if(array[left] <= array[right]) segment[index++] = array[left++];
				else segment[index++] = array[right++];
			}

			while(left <= median)
			{
				segment[index++] = array[left++];
			}

			while(right <= end)
			{
				segment[index++] = array[right++];
			}

			for(int i = 0; i < size; i++)
			{
				array[start + i] = segment[i];
			}
		}

		public static void Sort(int[] array, int start, int end)
		{
			if(start < end)
			{
				int median = (start + end) / 2;

				Sort(array, start, median);
				Sort(array, median + 1, end);
				Merge(array, start, median, end);
			}
		}
	}
}