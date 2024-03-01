using System;

namespace Properties
{
	public class PropertiesClass
	{
		private int field = 0;

		public int Field {get{return this.field;} set{this.field = value;}}
	}

	class Program
	{
		static void Main()
		{
			PropertiesClass properties = new PropertiesClass();

			properties.Field = 400;

			Console.WriteLine(properties.Field);
		}
	}
}