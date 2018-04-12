/************************************
*									*
*		Nathan Whitchurch			*
*		CIS 214 c++					*
*		Exam 1 part 2-2				*	
*									*		
*************************************/
#ifndef DRIVER_H
#define DRIVER_H
#include <iostream>

using namespace std;

class Driver
	{
		private:
			string name;
			int age;

		public:
			Driver(string nameIn, int ageIn);	
			~Driver();
			print();
			string getName() {return name;};
			int getAge() {return age;};
			// two getter methods, declared in the prototype section since they are so simple. 
	};
			
	
	Driver::Driver (string nameIn, int ageIn)	
	// constructor for an object of the Driver class using passed in data
		{
			name = nameIn;
			age = ageIn;			
		}
		
 	Driver::print()
 	// print the data in an object of the Driver class
		{
			cout << "\nName: " << Driver::getName();
			cout << "\nAge: " << Driver::getAge();
		}

	Driver::~Driver()
		 {

		 }
			
#endif
	

