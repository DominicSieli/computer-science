#ifndef DEBUG_LOG
#define DEBUG_LOG

#include <iostream>

#include "color_codes.h"
#include "variatic_list.h"
#include "configuration.h"

#ifdef LINUX
#define LOG(...) std::cout << "\033[1;" << COLOR::GREEN << "m" << "[LOG]: " << variatic_list(__VA_ARGS__) << "\033[0m" << '\n';
#define LOG_ERROR(...) std::cout << "\033[1;" << COLOR::RED << "m" << "[ERROR]: " << variatic_list(__VA_ARGS__) << "\033[0m" << '\n';
#define LOG_WARNING(...) std::cout << "\033[1;" << COLOR::YELLOW << "m" << "[WARNING]: " << variatic_list(__VA_ARGS__) << "\033[0m" << '\n';
#endif

#endif