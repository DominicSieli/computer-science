#include <iostream>

enum class Data : unsigned short
{
	DATA_0,
	DATA_1,
	DATA_2
};

int main()
{
	unsigned short number = 0;
	Data data = (Data)number;

	switch(data)
	{
		case Data::DATA_0 : std::cout << "Loaded Data 0" << '\n';
		break;

		case Data::DATA_1 : std::cout << "Loaded Data 1" << '\n';
		break;

		case Data::DATA_2 : std::cout << "Loaded Data 2" << '\n';
		break;

		default : break;
	}
}