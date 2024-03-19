public class QuickSort
{
	private static int Partition(int[] array, int startIndex, int endIndex)
	{
		int pivot = array[startIndex];
		int medianIndex = startIndex;

		for(int i = startIndex + 1; i <= endIndex; i++)
		{
			if(array[i] < pivot)
			{
				medianIndex++;
				int a = array[i];
				int b = array[medianIndex];
				array[i] = b;
				array[medianIndex] = a;
			}
		}

		int x = array[startIndex];
		int y = array[medianIndex];
		array[startIndex] = y;
		array[medianIndex] = x;

		return medianIndex;
	}

	public static void Sort(int[] array, int startIndex, int endIndex)
	{
		if(startIndex < endIndex)
		{
			int pivotIndex = Partition(array, startIndex, endIndex);

			Sort(array, startIndex, pivotIndex - 1);
			Sort(array, pivotIndex + 1, endIndex);
		}
	}
}