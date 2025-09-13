//MusicPlayer Class Declaration section
//Programmer: Maria Psomas :)

#ifndef MUSICPLAYER_H
#define MUSICPLAYER_H

#include "CircleDLinkedList.h"

class MusicPlayer
{
	private:
		std::string type; //Type of music player 
		int size; //Number of songs 
		CircleDLinkedList playerList; //doubly circulary linked list of songs
	public:
		MusicPlayer(std::string); //constructor
		virtual ~MusicPlayer();//Destructor
		void play(); //'Plays' current song- as in prints the properties.
		void next();//'Plays' next song.
		void previous(); //'Plays' previous song
		void add(const Song&); //Adds song before current song
		void remove();//Removes current song
		void print(bool, int);
};

#endif
