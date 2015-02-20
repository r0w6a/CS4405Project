/*
 * os_init.h
 *
 *  Created on: Feb 20, 2015
 *      Author: m6gpn
 */

#ifndef OS_INIT_H_
#define OS_INIT_H_

#include "os.h"
#include "os_process.h"

int running = TRUE;
char idleWorkspace[WORKSPACE];

ProcessQueue sporaticProcesses;


Process processArray[MAXPROCESS];
Process idleProcess;
Process* currentProcess;



/* idle process */
void idle ( void ){
    while ( running ){
    	//serial_print("IIIIII\n"); /* just for debugging purposes */
    }
}


void OS_Init(){
	/* Initialize processes */
	int i;
	for ( i = 0; i < MAXPROCESS; ++i )
	{
		processArray[i].pid = i + 1;
		processArray[i].level = -1;
		processArray[i].state = TERMINATED;
		processArray[i].argument= 0;
		processArray[i].pc = 0;
	}


	/* Initialize idle process */
	idleProcess.pid = IDLE;
	idleProcess.state = NEW;
	idleProcess.pc = &idle;
	idleProcess.stackPointer = (unsigned int*) (idleWorkspace + WORKSPACE/4);
	/* init the process queues (only sporadic for dev1)*/
	//TODO

} // end of init();


initializeQueues(){
	/* device processes queue */
	//TODO for deliverable 2

	/* sporadic processes queue */
	sporaticProcesses.count = 0;
	sporaticProcesses.next = 0;
	sporaticProcesses.first = 0;
}





void OS_Start(){

	while (running){
		//OS is running do os stuff here.
	}
}

void OS_Abort(){
	//will make the OS exit.
	running = FALSE;
}

#endif /* OS_INIT_H_ */
