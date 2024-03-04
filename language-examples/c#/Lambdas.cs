using System;
using System.Collections.Generic;

namespace Lambdas
{
	class Program
	{
		static void Main()
		{
			const int factor = 5;

			List<int> list = new List<int> {0,1,2,3,4,5,6,7,8,9};
			var list2 = list.FindAll(i => i > 5);

			Func<int,int> square = (n) => (n*n);
			Func<int,int> multiplier = (n) => (n*factor);

			Console.WriteLine(square(5));
			Console.WriteLine(multiplier(10));

			foreach(var i in list2)
			{
				Console.Write("{0} ", i);
			}
		}
	}
}