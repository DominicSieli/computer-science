public class SelectionSort
{
	public static void Sort(int[] array)
	{
		int min = 0;

		for(int i = 0; i < array.length; i++)
		{
			min = i;

			for(int j = i + 1; j < array.length; j++)
			{
				if(array[j] < array[min]) min = j;
			}

			int temp = array[i];
			array[i] = array[min];
			array[min] = temp;
		}
	}
}