public class BinarySearch
{
	public static int search(int[] array, int target)
	{
		int left = 0;
		int median = 0;
		int right = array.length - 1;

		while(left <= right)
		{
			median = left + (right - left) / 2;

			if(target == array[median]) return median;
			if(target > array[median]) left = median + 1;
			if(target < array[median]) right = median - 1;
		}

		return -1;
	}
}