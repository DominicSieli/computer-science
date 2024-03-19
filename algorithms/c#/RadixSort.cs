using System.Collections.Generic;

namespace Algorithms
{
	public static class RadixSort
	{
		public static void Sort(int[] array)
		{
			int max = array[0];
			Queue<int>[] buckets = new Queue<int>[10];

			for(int i = 0; i < buckets.Length; i++)
			{
				buckets[i] = new Queue<int>();
			}

			for(int i = 0; i < array.Length; i++)
			{
				if(max < array[i]) max = array[i];
			}

			for(int exp = 1; max/exp > 0; exp *= 10)
			{
				for(int i = 0; i < array.Length; i++)
				{
					buckets[(array[i]/exp)%10].Enqueue(array[i]);
				}

				int counter = 0;

				for(int i = 0; i < 10; i++)
				{
					while(buckets[i].Count > 0)
					{
						array[counter++] = buckets[i].Peek();
						buckets[i].Dequeue();
					}
				}
			}
		}
	}
}