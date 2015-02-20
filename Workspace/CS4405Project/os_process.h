
#ifndef OS_PROCESS_H_
#define OS_PROCESS_H_

#include "os.h"

typedef enum{
    NEW, RUNNING, WAITING, READY, TERMINATED
}States;


typedef struct process {

	PID pid;
	int level;
	States state;
	int argument;
	int *stackPointer;
	void (*pc)(void); // function pointer
	int frequency;
	int CountDown;
	int name;
	int semaphore_hold; // semaphore this holds
	int semaphore_sleep; // semaphore it is sleeping on
} Process ;


typedef struct queue_struct
{
    Process*  processRefs[MAXPROCESS];  /* message circular buffer */
    int             count;         /* keeps track of the number of items */
    int             next;              /* next spot to write in */
    int             first;             /* first element to read */
} ProcessQueue;



void initializeQueues();

// software interrupt
void SWI(void);


PID  OS_Create(void (*f)(void), int arg, unsigned int level, unsigned int n){
	return 0;
}
void OS_Terminate(void){}
void OS_Yield(void){}

int  OS_GetParam(void){
	return 0;
}


#endif /* OS_PROCESS_H_ */
