#pragma once

#include <iostream>

#include "color_codes.h"
#include "variatic_list.h"
#include "configuration.h"

#ifdef LINUX
	#define LOG(...) std::cout << "\033[1;" << COLOR::GREEN << "m" << "[LOG]: " << Variatic_List(__VA_ARGS__) << "\033[0m" << '\n';
	#define LOG_ERROR(...) std::cout << "\033[1;" << COLOR::RED << "m" << "[ERROR]: " << Variatic_List(__VA_ARGS__) << "\033[0m" << '\n';
	#define LOG_WARNING(...) std::cout << "\033[1;" << COLOR::YELLOW << "m" << "[WARNING]: " << Variatic_List(__VA_ARGS__) << "\033[0m" << '\n';
#endif