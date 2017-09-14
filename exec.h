//ADMIN AND USER METHODS
#ifndef EXEC_H
#define EXEC_H

#include <iostream>
#include <fstream>
#include <istream>
#include <string>
#include <limits>
#include <algorithm>

#include "date.h"
#include "linkedList.h"

class exec
{
	private:

		linkedList<date> eventList;

	public:
		//constructor and destructor
		exec();
		~exec();

		/* admin method controls admin options
		* Option 1: Creates event (creates date object and prints to text file)
		* Option 2: Look at event
		*/
		void admin();

		/* user method controls user options
		* Option 1: Check Active Events
		* 	- Select Available Event (Update text file)
		*/
		void user();

		/* print method creates linked list, accesses text file, creates date objects,
		* and places date objects into sorted linked list
		* @return Print list in readable form to terminal (uses time parameter to determine 12/24 hr clock)
		*/
		void print(bool time);

		/*
		* Method runs the program and calls to the admin or user based on what is selected
		*/
		void run();

		void test();
		
		bool updateEvent(std::string eventNameCheck);

		bool timeCheck (int time, int len);

};

#include "exec.hpp"

#endif
