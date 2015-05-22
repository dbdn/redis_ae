#ifndef WIN_DEF
#define WIN_DEF

#include <WinSock2.h>
#include <windows.h>
#include <time.h>
#include "ae.h"
#ifndef zmalloc
#define zmalloc malloc
#endif // !zmalloc

#ifndef zfree
#define zfree free
#endif

#ifndef zrealloc
#define zrealloc realloc
#endif
typedef INT64 time_t;
int gettimeofday(struct timeval *tp, void *tzp);

#endif	// WIN_DEF