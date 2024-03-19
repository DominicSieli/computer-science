import java.util.*;

public class RadixSort
{
	public static void Sort(int[] array)
	{
		int max = array[0];
		Queue<Integer>[] buckets = new LinkedList[10];

		for(int i = 0; i < buckets.length; i++)
		{
			buckets[i] = new LinkedList<Integer>();
		}

		for(int i = 0; i < array.length; i++)
		{
			if(max < array[i]) max = array[i];
		}

		for(int exp = 1; max/exp > 0; exp *= 10)
		{
			for(int i = 0; i < array.length; i++)
			{
				buckets[(array[i]/exp)%10].add(array[i]);
			}

			int counter = 0;

			for(int i = 0; i < 10; i++)
			{
				while(buckets[i].size() > 0)
				{
					array[counter++] = buckets[i].peek();
					buckets[i].remove();
				}
			}
		}
	}
}