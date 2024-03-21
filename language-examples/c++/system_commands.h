#ifndef SYSTEM_COMMANDS
#define SYSTEM_COMMANDS

#include "configuration.h"

#ifdef LINUX
#define SLASH "/"
#define CLEAR "clear"
#define CREATE_FILE "touch "
#define CREATE_DIRECTORY "mkdir -p "
#endif

#ifdef WINDOWS
#define SLASH "\\"
#define CLEAR "cls"
#define CREATE_FILE "type NUL > "
#define CREATE_DIRECTORY "mkdir "
#endif

#endif