using System;
using System.Linq;

namespace ExtensionMethods
{
	public static class StringExtensions
	{
		public static string Shorten(this String str, int numberOfWords)
		{
			if(numberOfWords <= 0) return "";

			var words = str.Split(' ');

			if(words.Length <= numberOfWords) return str;

			return String.Join(' ', words.Take(numberOfWords));
		}
	}

	class Program
	{
		static void Main()
		{
			string str = "Word1 Word2 Word3 Word4 Word5 Word6 Word7 Word8 Word9 Word10.";
			var shortenedStr = str.Shorten(4);

			Console.WriteLine(shortenedStr);
		}
	}
}