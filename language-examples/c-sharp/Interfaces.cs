using System;
using System.Collections.Generic;

namespace Interfaces
{
	public interface IClass
	{
		void Method();
	}

	public class SubClass1 : IClass
	{
		public void Method()
		{
			Console.WriteLine("SubClass1 Method Called");
		}
	}

	public class SubClass2 : IClass
	{
		public void Method()
		{
			Console.WriteLine("SubClass2 Method Called");
		}
	}

	public class SubClass3 : IClass
	{
		public void Method()
		{
			Console.WriteLine("SubClass3 Method Called");
		}
	}

	public class SubClass4 : IClass
	{
		public void Method()
		{
			Console.WriteLine("SubClass4 Method Called");
		}
	}

	class Program
	{
		static void Main()
		{
			List<IClass> list = new List<IClass>();

			list.Add(new SubClass1());
			list.Add(new SubClass2());
			list.Add(new SubClass3());
			list.Add(new SubClass4());

			foreach(var x in list)
			{
				x.Method();
			}
		}
	}
}