/************************************
*									*
*		Nathan Whitchurch			*
*		CIS 214 c++					*
*		Exam 1 part 2-2				*	
*									*		
************************************/
#ifndef AUTO_H
#define AUTO_H
#include <iostream>
#include "driver.h"
using namespace std;

class Auto
	{
		private:
			string driverName;
			int driverAge;
			string carMake;
			int carYear;
			
		public:
			Auto(Driver*, string, int);	
			void print();
			~Auto();
	};
	
Auto::Auto(Driver* driverInfo, string make, int year)
//Accepts a Driver class object, calling it driverInfo and passes it into local variables for later use. 
	{
		driverName = driverInfo->getName();
		driverAge = driverInfo->getAge();
		carMake = make;
		carYear = year;
	}

void Auto::print()
//Prints the driver and car information using the local variables that were assigned in the above constructor
	{
		cout << "Driver " << driverName << " age " << driverAge << " drives a " << carYear 
		<< " " << carMake;
	}	
	
Auto::~Auto()
	{
		 	
	}
	
#endif
