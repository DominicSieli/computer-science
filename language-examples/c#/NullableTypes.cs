using System;

namespace NullableTypes
{
	class Program
	{
		static void Main()
		{
			DateTime? date1 = null;
			Nullable<DateTime> date2 = date1 ?? DateTime.Now;

			Console.WriteLine("Current Time: " + date2.GetValueOrDefault());
		}
	}
}