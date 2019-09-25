#pragma hdrstop
#pragma argsused

#include <stdio.h>

#ifdef _WIN32
#include <tchar.h>
#else
  typedef char _TCHAR;
  #define _tmain main
#endif

int _tmain(int argc, _TCHAR* argv[]) 
{
static inline int add(int a, int b);

	printf("a+b=%d", add(10, 15));
	return 0;
}

static inline int add(int a, int b)
{
    return a + b;
}


