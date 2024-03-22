using System;

namespace ClassCasting
{
	public class BaseClass
	{
	}

	public class SubClass : BaseClass
	{
	}

	class Program
	{
		static void Main()
		{
			SubClass subClass1 = new SubClass();

			BaseClass baseClass = subClass1;			  // Up Casting
			SubClass subClass2 = baseClass as SubClass;   // Down Casting

			Console.WriteLine((subClass1 is SubClass) ? "True" : "False");
			Console.WriteLine((subClass2 is SubClass) ? "True" : "False");
			Console.WriteLine((baseClass is BaseClass) ? "True" : "False");
		}
	}
}