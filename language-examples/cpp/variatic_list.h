#pragma once
#include <string>
#include <sstream>

std::string Variatic_List()
{
	return "";
}

template<typename T0, typename... Tn>
std::string Variatic_List(T0 t0, Tn... list)
{
	std::stringstream sstream;
	sstream << t0 << " " << Variatic_List(list...);
	return sstream.str();
}