//CircleDLinkedList Class Implementation section
//Programmer: Maria Psomas :)

#include "CircleDLinkedList.h"

//constructor
CircleDLinkedList::CircleDLinkedList()
{
	cursor = new DCNode;
//element is NULL
	cursor->elem.setSongTitle("NULL");
	cursor->elem.setSingerName("NULL");
//Cursor points to itself
	cursor->next = cursor;
	cursor->prev = cursor;
}

//Destructor
CircleDLinkedList::~CircleDLinkedList()
{
	while (!empty())
		remove();
}

//Empty function
bool CircleDLinkedList::empty() const
{
	return (cursor->elem.getSongTitle() == "NULL");
}

//current, next, and previous element of cursor functions
const Song& CircleDLinkedList::current()
{
	return cursor->elem;
}
const Song& CircleDLinkedList::next()
{
	return cursor->next->elem;
}
const Song& CircleDLinkedList::prev()
{
	return cursor->prev->elem;
}

//Move functions
void CircleDLinkedList::moveNext()
{
	cursor = cursor->next;
}

void CircleDLinkedList::movePrev()
{
	cursor = cursor->prev;
}

//add and remove functions 
void CircleDLinkedList::add(const Song &n)
{
//if the list is empty, then the cursor remains pointing to itself
//and the element the cursor is holding becomes the new element.
	if (empty())
	{	
		cursor->elem.setSongTitle(n.getSongTitle());
		cursor->elem.setSingerName(n.getSingerName());
		return;
	}
//Otherwise, if there's one element, cursor will now point to new element.
	DCNode *s = new DCNode;
	s->elem.setSongTitle(n.getSongTitle());
	s->elem.setSingerName(n.getSingerName());
	if (cursor->next == cursor)
	{
//cursor's next and previous will point to second element 
//And second element's next and  previous will point to cursor.
	cursor->next = s;
	cursor->prev = s;
	s->next = cursor;
	s->prev = cursor;
	}
	else //if there's more than 2 elements
	{
//putting the new element in between cursor and cursor's previous
		cursor->prev->next = s;
		s->prev = cursor->prev;
		cursor->prev = s;
		s->next = cursor;
	}
}

void CircleDLinkedList::remove()
{
	DCNode *temp = cursor;
	cursor->prev->next = cursor->next;
	cursor->next->prev = cursor->prev;
	cursor = cursor->next;
	delete temp;
}
