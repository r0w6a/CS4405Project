/*
 * os_init.c
 *
 *  Created on: Feb 18, 2015
 *      Author: m6gpn
 */

#include "os.h"

int running = TRUE;

void OS_Init(){
	// Initialize PPP and PPPMax[]
	int PPPLen = MAXPROCESS;
	int PPP[PPPLen];
	int PPPMax[PPPLen];

} // end of init();

void OS_Start(){

	while (running){
		//OS is running do os stuff here.
	}
}

void OS_Abort(){
	//will make the OS exit.
	running = FALSE;
}
