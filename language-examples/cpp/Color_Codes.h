#pragma once

#include "Configuration.h"

#ifdef LINUX
enum COLOR : unsigned short int
{
	RED = 31,
	BLUE = 34,
	CYAN = 36,
	GREEN = 32,
	WHITE = 37,
	YELLOW = 33,
	MAGENTA = 35
};
#endif

#ifdef WINDOWS
enum COLOR : unsigned short int
{
	RED = 12,
	BLUE = 9,
	CYAN = 11,
	GREEN = 10,
	WHITE = 15,
	YELLOW = 14,
	MAGENTA = 13
};
#endif