//CircleDLinkedList Class Declaration section
//This class is a circulary doubly linked list of the Song class element.
//Programmer: Maria Psomas :)

#ifndef CIRCLEDLINKEDLIST_H
#define CIRCLEDLINKEDLIST_H

#include "DCNode.h"

class CircleDLinkedList
{
	private:
		DCNode *cursor;
	public:
		CircleDLinkedList();//Constructor
		~CircleDLinkedList(); //Destructor
		bool empty() const; //Checking whether list is empty 
		const Song& current(); //Current element cursor is pointing at
		const Song& next(); //Next element after cursor
		const Song& prev();//Previous element before cursor
		void moveNext(); //Moves cursor to the next element.
		void movePrev();//Moves cursor to the previous element
		void add(const Song&); //Adds an element
		void remove(); //Removes current element
};

#endif
