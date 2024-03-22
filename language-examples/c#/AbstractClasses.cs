using System;
using System.Collections.Generic;

namespace AbstractClasses
{
	public abstract class BaseClass
	{
		public abstract void Method();
	}

	public class SubClass1 : BaseClass
	{
		public override void Method()
		{
			Console.WriteLine("SubClass1 Method Called");
		}
	}

	public class SubClass2 : BaseClass
	{
		public override void Method()
		{
			Console.WriteLine("SubClass2 Method Called");
		}
	}

	public class SubClass3 : BaseClass
	{
		public override void Method()
		{
			Console.WriteLine("SubClass3 Method Called");
		}
	}

	public class SubClass4 : BaseClass
	{
		public override void Method()
		{
			Console.WriteLine("SubClass4 Method Called");
		}
	}

	class Program
	{
		static void Main()
		{
			List<BaseClass> list = new List<BaseClass>();

			list.Add(new SubClass1());
			list.Add(new SubClass2());
			list.Add(new SubClass3());
			list.Add(new SubClass4());

			foreach(var subClass in list)
			{
				subClass.Method();
			}
		}
	}
}