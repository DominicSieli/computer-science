#include <string>
#include <sstream>
#include <iostream>

std::string VariaticList()
{
	return "";
}

template<typename T0, typename... Tn>
std::string VariaticList(T0 t0, Tn... list)
{
	std::stringstream sstream;
	sstream << t0 << " " << VariaticList(list...);
	return sstream.str();
}

int main()
{
	std::cout << VariaticList("Dom", 'A', 2.22, 4) << '\n';
}