//MusicPlayer Class Implementation section
//Programmer: Badtothebunny

#include "MusicPlayer.h"

//Constructor
MusicPlayer::MusicPlayer(std::string t)
{
	type = t;
	size = 0;
}

//Destructor
MusicPlayer::~MusicPlayer()
{
//No body is needed.	
}

//play (print) function
void MusicPlayer::play()
{
	cout<<"Type: "<<type<<endl<<playerList.current();
}

void MusicPlayer::next()
{
	playerList.moveNext(); //Move cursor to next song.
	play(); //And 'plays' it.
}

void MusicPlayer::previous()
{
	playerList.movePrev();
	play();
}

void MusicPlayer::add(const Song &music)
{
	playerList.add(music);
	size++; //Add 1 to the size
}

void MusicPlayer::remove()
{
//if list is empty, it won't remove anything because nothing is there.
	if (size == 0)
		return;
//otherwise we remove the current song and decrease the size
	playerList.remove();
	size--;
}

void  MusicPlayer::print(bool parameter, int base)
{
	if (base == size)
		return;
	if (parameter == true)
	{
		next(); //plays next song
		base = base + 1;
		return print (parameter, base);
	}
	else if (parameter == false)
	{
		previous();
		base = base + 1;
		return print(false, base);
	}
}

