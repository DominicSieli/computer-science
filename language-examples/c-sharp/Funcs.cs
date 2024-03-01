using System;

namespace Funcs
{
	public class DelegatedMethods
	{
		public int Method1()
		{
			return 1;
		}
	}

	public class DelegatedMethodCaller
	{
		public int CallMethods(Func<int> callMethodsHandler)
		{
			return callMethodsHandler();
		}
	}

	class Program
	{
		static void Main()
		{
			DelegatedMethodCaller delegatedMethodCaller = new DelegatedMethodCaller();
			DelegatedMethods delegatedMethods = new DelegatedMethods();
			Func<int> callMethodsHandler = delegatedMethods.Method1;

			Console.WriteLine(delegatedMethodCaller.CallMethods(callMethodsHandler));
		}
	}
}