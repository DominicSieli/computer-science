public class CrossSort
{
	public static void sort(int[] array)
	{
		int j = 0;
		int l = 0;
		int r = array.length - 1;
		boolean sorted = false;

		while(sorted == false)
		{
			sorted = true;

			for(int i = l; i < r; i++)
			{
				j = (array.length - i) - 1;

				if(i < j && array[i] > array[j])
				{
					sorted = false;
					int a = array[i];
					int b = array[j];
					array[i] = b;
					array[j] = a;
				}

				if(array[i] > array[i + 1])
				{
					sorted = false;
					int a = array[i];
					int b = array[i + 1];
					array[i] = b;
					array[i + 1] = a;
				}

				if(array[j] < array[j - 1])
				{
					sorted = false;
					int a = array[j];
					int b = array[j - 1];
					array[j] = b;
					array[j - 1] = a;
				}
			}

			l++;
			r--;
		}
	}
}