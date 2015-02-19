/*
 * os_semaphore.c
 *
 *  Created on: Feb 18, 2015
 *      Author: m6gpn
 */


#include "os.h"

/*semaphore struct*/
typedef struct{

  int   value;
  int   processCount;
  struct process *list;
}semaphore;

semaphore semaphore_Array[MAXSEM];
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
