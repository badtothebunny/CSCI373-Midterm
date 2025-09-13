//Song Class Implementation section
//Programmer: Badtothebunny

#include "Song.h"

//constructor
Song::Song()
{
	songTitle = " ";
	singerName = " ";
}
// Assignment operator
Song::Song(std::string title, std::string name) 
{
    songTitle = title;
    singerName = name;
}

// Destructor
Song::~Song() 
{
// Destructor body is not needed here.
}

// Getters
std::string Song::getSongTitle()const 
{
    return songTitle;
}

std::string Song::getSingerName()const
{
    return singerName;
}

// Setters
void Song::setSongTitle(const std::string& title) 
{
    songTitle = title;
}

void Song::setSingerName(const std::string& name) 
{
    singerName = name;
}

std::ostream& operator<<(std::ostream& outstream, const Song &temp) 
{
        outstream<<"Song: "<<temp.getSongTitle()<<"\nSinger: "<<temp.getSingerName()<<endl;
        return outstream;
}

