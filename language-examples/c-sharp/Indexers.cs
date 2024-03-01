using System;
using System.Collections.Generic;

namespace Indexers
{
	public class Indexer
	{
		private readonly Dictionary<string, string> dictionary = new Dictionary<string, string>();

		public string this[string key] {get{return dictionary[key];} set{dictionary[key] = value;}}
	}

	class Program
	{
		static void Main()
		{
			Indexer index = new Indexer();

			index["name"] = "Dom";

			Console.WriteLine(index["name"]);
		}
	}
}