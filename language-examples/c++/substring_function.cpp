#include <string>
#include <vector>
#include <iostream>

std::vector<std::string> Substrings(const std::string& string, const char& separator)
{
	unsigned int index = 0;
	unsigned int length = 0;
	unsigned int separators = 0;
	std::vector<std::string> substrings;

	while(index < string.length())
	{
		length = 0;
		separators = 0;

		while((index + length) < string.length() && string[index + length] != separator)
		{
			length++;
		}

		while((index + length + separators) < string.length() && string[index + length + separators] == separator)
		{
			separators++;
		}

		if(length > 0)
		{
			substrings.push_back(string.substr(index, length));
		}

		index += (length + separators);
	}

	return substrings;
}

int main()
{
	std::string string = "Substring_1-Substring_2-Substring_3-Substring_4-Substring_5-Substring_6-Substring_7-Substring_8";
	std::vector<std::string> substrings = Substrings(string, '-');

	for(unsigned int i = 0; i < substrings.size(); i++)
	{
		std::cout << substrings[i] << '\n';
	}
}