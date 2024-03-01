public class QuickSort
{
	private static int partition(int[] array, int startIndex, int endIndex)
	{
		int pivot = array[startIndex];
		int middleIndex = startIndex;

		for(int i = startIndex + 1; i <= endIndex; i++)
		{
			if(array[i] < pivot)
			{
				middleIndex++;
				int a = array[i];
				int b = array[middleIndex];
				array[i] = b;
				array[middleIndex] = a;
			}
		}

		int x = array[startIndex];
		int y = array[middleIndex];
		array[startIndex] = y;
		array[middleIndex] = x;

		return middleIndex;
	}

	public static void sort(int[] array, int startIndex, int endIndex)
	{
		if(startIndex < endIndex)
		{
			int pivotIndex = partition(array, startIndex, endIndex);

			sort(array, startIndex, pivotIndex - 1);
			sort(array, pivotIndex + 1, endIndex);
		}
	}
}