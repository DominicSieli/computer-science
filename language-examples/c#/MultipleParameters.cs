using System;

namespace MultipleParameters
{
	public class Multiple
	{
		public static int[] Parameters(params int[] parameters)
		{
			for(int i = 0; i < parameters.Length; i++)
			{
				parameters[i] *= 100;
			}

			return parameters;
		}
	}

	class Program
	{
		static void Main()
		{
			int[] array = Multiple.Parameters(1,2,3,4,5,6,7,8,9,10);

			foreach(var x in array)
			{
				Console.WriteLine(x);
			}
		}
	}
}