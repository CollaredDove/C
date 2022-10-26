#if defined(_WIN32)
#ifndef _WIN32_WINNT
#define _WIN32_WINNT 0x0600
#endif
#include <memory.h> 
#else
#include <cstring>
#endif

#include <stdlib.h> 