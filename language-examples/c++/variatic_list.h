#ifndef VARIATIC_LIST
#define VARIATIC_LIST

#include <string>
#include <sstream>

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

#endif