using System;
using System.IO;

namespace ExceptionHandling
{
	public class Math
	{
		public static int Divide(int dividend, int divisor)
		{
			return dividend / divisor;
		}
	}

	public class FileAccessException : Exception
	{
		public FileAccessException(string message, Exception innerException)
			: base(message, innerException)
		{}
	}

	class Program
	{
		static void Main()
		{
			try
			{
				Console.WriteLine(Math.Divide(10, 0));
			}
			catch(DivideByZeroException)
			{
				Console.WriteLine("Divide By Zero Exception!");
			}
			catch(ArithmeticException)
			{
				Console.WriteLine("Arithmatic Exception!");
			}
			catch(Exception)
			{
				Console.WriteLine("Unknown Exception!");
			}

			try
			{
				using(var streamReader = new StreamReader(@"Exception_Handling.cs"))
				{
					Console.WriteLine(streamReader.ReadToEnd());
				}
			}
			catch(Exception ex)
			{
				throw new FileAccessException("Could not load file!", ex);
			}
		}
	}
}