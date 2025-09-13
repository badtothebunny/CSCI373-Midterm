//Written for midterm
//Programmer: Badtothebunny

#include <iostream>
#include "MusicPlayer.h"
int main(int argc, char** argv)
{
	cout<<"Welcome. This program tests the functionality of a MusicPlayer class that "
		<<"utilizes a circulary doubly linked list."<<endl;
	Song m1("Neon Gravestones","Twenty One Pilots");
	Song m2("Runaway","Kanye West");
	Song m3("Maybe", "Half Alive");
	MusicPlayer test("Spotify");
	test.add(m1);
	test.add(m2);
	test.add(m3);
	cout<<"First is printing the current song."<<endl;
	test.play();
	cout<<"I will then play next song, three times"<<endl;
	test.next();
	test.next();
	test.next();
	cout<<"I will now play the previous song."<<endl;
	test.previous();
	cout<<"I will now print all the songs forward."<<endl;
	test.print(true,0);
	cout<<"I will now print all the songs backwards."<<endl;
	test.print(false,0);
	cout<<"Next, I will remove the current song and play what becomes the current song."<<endl;
	test.remove();
	test.play();
	cout<<"I will now play the next song, three times."<<endl;
	test.next();
	test.next();
	test.next();
	cout<<"I will now print all the songs forwards."<<endl;
	test.print(true,0);
	cout<<"Lastly, I will print all the songs backwards."<<endl;
	test.print(false,0);
	cout<<"That concludes this test. Thank you for using my program."<<endl;
	return 0;
}

