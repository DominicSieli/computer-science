public class BubbleSort
{
	public static void Sort(int[] array)
	{
		boolean sorted = false;

		while(sorted == false)
		{
			sorted = true;

			for(int i = 0; i < array.length - 1; i++)
			{
				if(array[i] > array[i + 1])
				{
					sorted = false;

					int temp = array[i];
					array[i] = array[i + 1];
					array[i + 1] = temp;
				}
			}
		}
	}
}