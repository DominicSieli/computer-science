using System;

namespace Dynamics
{
	class Program
	{
		static void Main()
		{
			dynamic name = "Dom";

			Console.WriteLine("Name: " + name);

			name = 10;

			Console.WriteLine("Name: " + name);

			name = 10.5f;

			Console.WriteLine("Name: " + name);
		}
	}
}