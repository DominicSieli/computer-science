using System;

namespace Boxing
{
	class Program
	{
		static void Main()
		{
			object heapInt = 10;		  // Boxing (Heap allocated reference type)
			int stackInt = (int)heapInt;  // Unboxing (stack allocated value type)

			Console.WriteLine("Heap Int: {0}\nStack Int: {1}", heapInt, stackInt);
		}
	}
}