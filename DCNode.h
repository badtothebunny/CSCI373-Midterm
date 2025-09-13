//DCNode Class Declaration Section
//Since this class is for Nodes, it will NOT have an implementation section
//Programmer: Maria Psomas :)

#ifndef DCNODE_H
#define DCNODE_H

#include "Song.h" //The element held will be Song type

class DCNode
{
	private:
		Song elem;
//Since we are implementing a doubly linked list, we need two nodes.
		DCNode *next;
		DCNode *prev;
//The Node class must be friends with the circulary doubly linked list 
//in order for it to be able to access the private data members.
		friend class CircleDLinkedList;

};

#endif
