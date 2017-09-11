#ifndef LINKEDLIST
#define LINKEDLIST

#include "node.h"
#include<iostream>
#include<vector>


class linkedList
{
	private:
		//private memory variables 		
		node* m_front;
		int m_size; 
		
	public: 
		//constructor and deconstructor 		
		linkedList();
		~linkedList();
		
		//returns true if list is empty
		//returns false otherwise
		bool isEmpty() const; 
		
		//returns size of the linked list
		int size() const; 

		//returns true if the value exists in any node
		//returns false otherwise
		bool search(int value) const; 

		//prints the list to the console
		//if list is empty print empty string 
		void printList() const;

		//adds 1 new node to back or front of the list
		//increments size
		void addBack(int value);
		void addFront(int value); 
	
		//removes 1 node to back or front of the list
		//decrements size
		bool removeBack();
		bool removeFront(); 

		//creates new vector 
		//copy contents of list into vector
		//returns a standard vector with the contents of the list inside
		//used by test class to varify contents of list 
		std::vector<int> toVector() const;
};

#include "linkedList.hpp"

#endif