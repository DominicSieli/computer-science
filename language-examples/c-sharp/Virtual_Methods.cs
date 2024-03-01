using System;

namespace VirtualMethods
{
	public class BaseClass
	{
		public virtual void Method()
		{
			Console.WriteLine("Virtual Method Called");
		}
	}

	public class SubClass : BaseClass
	{
		public override void Method()
		{
			Console.WriteLine("OverRide Method Called");
		}
	}

	class Program
	{
		static void Main()
		{
			SubClass subClass = new SubClass();
			BaseClass baseClass = new BaseClass();

			subClass.Method();
			baseClass.Method();
		}
	}
}