public class MergeSort
{
	private static void merge(int[] array, int start, int middle, int end)
	{
		int index = 0;
		int left = start;
		int right = middle + 1;
		int length = (end - start) + 1;
		int[] temp = new int[length];

		while(left <= middle && right <= end)
		{
			if(array[left] < array[right]) temp[index++] = array[left++];
			else temp[index++] = array[right++];
		}

		while(left <= middle)
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
			int middle = (start + end) / 2;

			sort(array, start, middle);
			sort(array, middle + 1, end);
			merge(array, start, middle, end);
		}
	}
}