public class QuickSort
{
	private static int partition(int[] array, int start, int end)
	{
		int pivot = array[start];
		int median = start;

		for(int i = start + 1; i <= end; i++)
		{
			if(array[i] < pivot)
			{
				median++;
				int a = array[i];
				int b = array[median];
				array[i] = b;
				array[median] = a;
			}
		}

		int x = array[start];
		int y = array[median];
		array[start] = y;
		array[median] = x;

		return median;
	}

	public static void sort(int[] array, int start, int end)
	{
		if(start < end)
		{
			int pivot = partition(array, start, end);

			sort(array, start, pivot - 1);
			sort(array, pivot + 1, end);
		}
	}
}