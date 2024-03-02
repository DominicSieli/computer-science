namespace Algorithms
{
	public static class MergeSort
	{
		private static void Merge(int[] array, int start, int middle, int end)
		{
			int index = 0;
			int left = start;
			int right = middle + 1;
			int segment = (end - start) + 1;

			int[] auxiliary = new int[segment];

			while(left <= middle && right <= end)
			{
				if(array[left] <= array[right]) auxiliary[index++] = array[left++];
				else auxiliary[index++] = array[right++];
			}

			while(left <= middle)
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

		public static void Sort(int[] array, int start, int end)
		{
			if(start < end)
			{
				int middle = (start + end) / 2;

				Sort(array, start, middle);
				Sort(array, middle + 1, end);
				Merge(array, start, middle, end);
			}
		}
	}
}