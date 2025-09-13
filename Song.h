//Song Class Declaration section
//Programmer: Maria Psomas :)

#ifndef SONG_H
#define SONG_H

#include <iostream>
#include <string>
using namespace std;

class Song
{
	private:
		std::string songTitle; //Title of the song
		std::string singerName; //Name of the song
	public:
		Song();
		Song(std::string,std::string);
		~Song();
		std::string getSongTitle()const;
		std::string getSingerName()const;
		void setSongTitle(const std::string&);
		void setSingerName(const std::string&);
		friend std::ostream& operator<<(std::ostream&, const Song&); //Overloading the <<operator
};

#endif
