#include <string>
#include <fstream>
#include <iostream>

#include "system_commands.h"

int main()
{
	system(CREATE_DIRECTORY "File_OUTPUT");
	system(CREATE_FILE "File_OUTPUT" SLASH "file-output.txt");

	std::ifstream read_file;

	read_file.open("File_OUTPUT" SLASH "file-output.txt", std::ios_base::in);

	if(read_file.is_open())
	{
		std::string text = "";

		while(read_file.good())
		{
			getline(read_file, text);
			std::cout << text << '\n';
		}

		read_file.close();
	}

	std::ofstream write_file;

	write_file.open("File_OUTPUT" SLASH "Output.txt", std::ios_base::out | std::ios_base::trunc);

	if(write_file.is_open())
	{
		std::string text = "";

		for(int i = 1; i < 21; i++)
		{
			text += "Line: " + std::to_string(i) + '\n';
		}

		write_file << text;
		write_file.close();
	}
}