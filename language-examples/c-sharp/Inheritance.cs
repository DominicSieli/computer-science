using System;

namespace Inheritance
{
	public class BaseClass
	{
		public int BaseClassField {get; set;}

		public void BaseClassMethod()
		{
			Console.WriteLine("BaseClassMethod called!");
		}
	}

	public class SubClass : BaseClass
	{
		public int SubClassField {get; set;}

		public void SubClassMethod()
		{
			Console.WriteLine("SubClassMethod called!");
		}
	}

	class Program
	{
		static void Main()
		{
			SubClass subClass = new SubClass();

			subClass.SubClassMethod();
			subClass.BaseClassMethod();
			subClass.SubClassField = 200;
			subClass.BaseClassField = 400;

			Console.WriteLine("SubClassField: {0}\nBaseClassField {1}", subClass.SubClassField, subClass.BaseClassField);
		}
	}
}