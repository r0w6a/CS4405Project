/*
 * os_semaphore.h
 *
 *  Created on: Feb 20, 2015
 *      Author: m6gpn
 */

#ifndef OS_SEMAPHORE_H_
#define OS_SEMAPHORE_H_


#include "os.h"
#include "os_process.h"
Semaphore semaphore_Array[MAXSEM];


/*semaphore struct*/
typedef struct{

  int   value;
  int   processCount;
  Process* ProcessQueue[MAXPROCESS];
}Semaphore;






void OS_InitSem(int s, int n){
  semaphore_Array[s].value = n; //set semaphore value to resource available
}


void OS_Wait(int s){
  //need to disable interrupt
  semaphore_Array[s].value--;

        if (semaphore_Array[s].value < 0)
        {
           //add process to list
        }
  //enable Interrupt
}
void OS_Signal(int s){
  //Disable Interrupt
  semaphore_Array[s].value++;

        if (semaphore_Array[s].value <= 0)
       {
        //remove process from list
       }

  //enable interrupt
}




#endif /* OS_SEMAPHORE_H_ */
