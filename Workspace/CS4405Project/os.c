


#include <stdio.h>
#include "os.h"

int main()
{
	// This has to be first init stuff
	OS_Init();



	// here we can only call OS_Create(), OS_InitSem(), and OS_InitFiFo()
	//TODO

	// Boot the OS
	OS_Start(); // This never returns?

	return 0;
}

