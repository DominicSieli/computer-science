import java.util.*;

public class CountingSort
{
	public static void sort(Integer[] array)
	{
		int min = Collections.min(Arrays.asList(array));
		int max = Collections.max(Arrays.asList(array));
		int range = (max - min) + 1;
		int[] count = new int[range];
		int[] output = new int[array.length];

		for(int i = 0; i < array.length; i++) count[array[i] - min]++;
		for(int i = 1; i < count.length; i++) count[i] += count[i - 1];

		for(int i = array.length - 1; i >= 0; i--)
		{
			output[count[array[i] - min] - 1] = array[i];
			count[array[i] - min]--;
		}

		for(int i = 0; i < array.length; i++)
		{
			array[i] = output[i];
		}
	}
}