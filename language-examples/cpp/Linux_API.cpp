#include <iostream>
#include <sys/sysinfo.h>

int main()
{
	struct sysinfo info;

	while(true)
	{
		sysinfo(&info);
		system("clear");
		std::cout << "CPU: " << info.bufferram << '\n';
		std::cout << "Ram: " << info.totalram - info.freeram << '\n';
	}
}