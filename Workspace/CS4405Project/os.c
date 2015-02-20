
#include <stdio.h>
#include "os.h"
#include "os_fifo.h"
#include "os_init.h"
#include "os_memory.h"
#include "os_process.h"
#include "os_semaphore.h"
int main()
{
	// called first to init the OS...
	OS_Init();



	// here we can only call OS_Create(), OS_InitSem(), and OS_InitFiFo()
	//TODO

	// Boot the OS
	OS_Start(); 

	return 0;
}

