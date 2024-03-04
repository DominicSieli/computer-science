using System;
using System.Linq;
using System.Collections.Generic;

namespace Linq
{
	public class Entry
	{
		public string Tag {get; set;}
		public int Data {get; set;}
	}

	public class Repository
	{
		public IEnumerable<Entry> Entries()
		{
			return new List<Entry>
			{
				new Entry() {Tag = "Tag4", Data = 4},
				new Entry() {Tag = "Tag5", Data = 5},
				new Entry() {Tag = "Tag6", Data = 6},
				new Entry() {Tag = "Tag7", Data = 7},
				new Entry() {Tag = "Tag8", Data = 8},
				new Entry() {Tag = "Tag2", Data = 2},
				new Entry() {Tag = "Tag3", Data = 3},
				new Entry() {Tag = "Tag1", Data = 1}
			};
		}
	}

	class Program
	{
		static void Main()
		{
			var entries = new Repository().Entries();
			var entry1 = entries.SingleOrDefault(e1 => e1.Tag == "Tag1");
			var entriesLessThan5 = entries.Where(entry => entry.Data < 5).OrderBy(entry => entry.Data);

			foreach(var entry in entriesLessThan5)
			{
				Console.WriteLine("Tag: {0}, Data: {1}", entry.Tag, entry.Data);
			}

			Console.WriteLine("\nTag: {0}, Data: {1}", entry1?.Tag, entry1?.Data);
		}
	}
}