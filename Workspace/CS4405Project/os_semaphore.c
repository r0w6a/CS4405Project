/*
 * os_semaphore.c
 *
 *  Created on: Feb 18, 2015
 *      Author: m6gpn
 */


#include "os.h"

/*semaphore struct*/
struct semaphore{
  
  process*  processQueue[MAXPROCESS];  // pointer to process
  int       process_count;
  int       value;
}

semaphore semaphore_Array[MAXSEM];
void OS_InitSem(int s, int n){
  semaphore_Array[s].value = n; //set semaphore value to resource available
}
void OS_Wait(int s){
  //need to disable interrupt
  // next process to run
  
}
void OS_Signal(int s){}
