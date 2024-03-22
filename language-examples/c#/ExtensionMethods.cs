using System;
using System.Linq;

namespace ExtensionMethods
{
	public static class StringExtensions
	{
		public static string Shorten(this String inputString, int numberOfWords)
		{
			if(numberOfWords <= 0) return "";

			var words = inputString.Split(' ');

			if(words.Length <= numberOfWords) return inputString;

			return String.Join(' ', words.Take(numberOfWords));
		}
	}

	class Program
	{
		static void Main()
		{
			string inputString = "Word1 Word2 Word3 Word4 Word5 Word6 Word7 Word8 Word9 Word10.";
			var shortenedString = inputString.Shorten(4);

			Console.WriteLine(shortenedString);
		}
	}
}