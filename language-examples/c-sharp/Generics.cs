using System;

namespace Generics
{
	public class GenericClass
	{
		public static T Add<T>(T n1, T n2)
		{
			return (T)((dynamic)n1 + (dynamic)n2);
		}
	}

	class Program
	{
		static void Main()
		{
			Console.WriteLine(GenericClass.Add<int>(10,10));
			Console.WriteLine(GenericClass.Add<float>(10.5f,10.5f));
		}
	}
}