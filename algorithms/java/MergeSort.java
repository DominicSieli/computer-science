public class MergeSort
{
	private static void merge(int[] array, int start, int median, int end)
	{
		int index = 0;
		int left = start;
		int right = median + 1;
		int length = (end - start) + 1;
		int[] temp = new int[length];

		while(left <= median && right <= end)
		{
			if(array[left] < array[right]) temp[index++] = array[left++];
			else temp[index++] = array[right++];
		}

		while(left <= median)
		{
			temp[index++] = array[left++];
		}

		while(right <= end)
		{
			temp[index++] = array[right++];
		}

		for(int i = 0; i < length; i++)
		{
			array[start + i] = temp[i];
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