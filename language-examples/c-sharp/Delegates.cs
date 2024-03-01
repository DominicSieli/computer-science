using System;

namespace Delegates
{
	public class DelegatedMethods
	{
		public void Method1()
		{
			Console.WriteLine("Method1 Called");
		}

		public void Method2()
		{
			Console.WriteLine("Method2 Called");
		}

		public void Method3()
		{
			Console.WriteLine("Method3 Called");
		}

		public void Method4()
		{
			Console.WriteLine("Method4 Called");
		}
	}

	public class DelegatedMethodCaller
	{
		public delegate void CallMethodsHandler();

		public void CallMethods(CallMethodsHandler callMethodsHandler)
		{
			callMethodsHandler();
		}
	}

	class Program
	{
		static void Main()
		{
			DelegatedMethodCaller delegatedMethodCaller = new DelegatedMethodCaller();
			DelegatedMethods delegatedMethods = new DelegatedMethods();
			DelegatedMethodCaller.CallMethodsHandler callMethodsHandler;
			callMethodsHandler = delegatedMethods.Method1;
			callMethodsHandler += delegatedMethods.Method2;
			callMethodsHandler += delegatedMethods.Method3;
			callMethodsHandler += delegatedMethods.Method4;

			delegatedMethodCaller.CallMethods(callMethodsHandler);
		}
	}
}