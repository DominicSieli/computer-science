import java.util.*;

public class CircularArray<T> implements Iterable<T>
{
	T[] array;
	T defaultValue;

	CircularArray(T... elements)
	{
		this.array = elements;
	}

	int size()
	{
		return this.array.length;
	}

	T getAtIndex(int index)
	{
		int circularIndex = Math.abs(index) % array.length;

		while(circularIndex > 9) {
			circularIndex /= 10;
		}

		return this.array[circularIndex];
	}

	void setAtIndex(T data, int index)
	{
		int circularIndex = Math.abs(index) % array.length;

		while(circularIndex > 9) {
			circularIndex /= 10;
		}

		this.array[circularIndex] = data;
	}

	public Iterator<T> iterator()
	{
		return new ArrayIterator();
	}

	public class ArrayIterator<T> implements Iterator<T>
	{
		int index = 0;

		@Override
		public boolean hasNext()
		{
			return index < array.length;
		}

		@Override
		public T next()
		{
			return (T)array[index++];
		}

		@Override
		public void remove()
		{}
	}
}