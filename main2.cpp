/************************************
*									*
*		Nathan Whitchurch			*
*		CIS 214 c++					*
*		Exam 1 part 2-2				*	
*									*		
************************************/
#include <iostream>
#include "driver.h"
#include "auto.h"

using namespace std;

int main(int argc, char * argv[]) {

	Driver* drv = new Driver("George", 13);
	// call a constructor to create a new object (and pointer) of the Driver class with passed in data
	
	Auto* myAuto = new Auto(drv, "Chevy", 1988);
	// call a constructor to create a new object (and pointer) of the Auto class with passed in data, 
	// including the previously created drv object
	
	myAuto->print();
	// call the print function using the pointer to the myAuto object
	
	drv->~Driver();
	// Destroy drv object
	
	myAuto->~Auto();
	// destroy the myAuto object
	
	
	return 0;
	//return a 0 after the successfull execution
}
