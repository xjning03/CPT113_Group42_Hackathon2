#include <iostream>
#include "File.h"
#include "Basketball.h"
#include "Place.h"
#include "History.h"
#include "PlaceList.h"
using namespace std ;

int main(){
	// class for read and write file
	FileInclusion p1, p2;

	// linked list of the 5 places
	PlaceList list;

	int level;
	string player1, player2;

	// set the file name that store historical data for player1 and player2
	p1.setFileName("History1.txt");
	p2.setFileName("History2.txt");

	// true means got data, continue the game
	if(p1.readFile() && p2.readFile()){
		level = p2.getCount(); // p1.getCount() will be same as p2.getCount()
		// append how many node then continue to the place the players stop
		switch(level){
			case 1: list.executeLibrary();	// second place
			break;
			case 2: list.executeCafe();		// third place
			break;
			case 3: list.executeCinema();	// fourth place
			break;
			case 4: list.executePark();	// last place
			break;
			default: cout << "Error\n";
			break;
		}
	}

	// false means start new game
	else{
		cout << "		     ***        ***     " << endl;
    	cout << "		   **   **    **   **   " << endl;
    	cout << "		 **       ****       ** " << endl;
    	cout << "		**                    **" << endl;
   		cout << "		**     Unexpected     **" << endl;
    	cout << "		 **    Encounters    **  " << endl;
    	cout << "		   **             **    " << endl;
    	cout << "		     **         **      " << endl;
    	cout << "		       **     **        " << endl;
    	cout << "		         *****          " << endl;
    	cout << endl;
		cout << "The game is designed for two players."<<endl;
		cout << "Press enter to start the game!"<<endl;
		cin.get();
		// print the setting of the game
			cout<<endl;
			cout << "-----------------------------------------------------------------------------------------------------"<<endl;
			cout << "					Chapter 1"<<endl;
			cout << "During weekend, our school had held an inter-basketball competition.\n" ;
			cout << "Your friends dragged you into supporting their team,\n" ;
			cout << "but little did you know that it would become a setting for an unexpected encounter.\n";
			cout << "Amidst the sea of basketball jerseys, a particular player, Jackson, caught your attention.\n";
			cout << "At this moment, you were determined to acquaintance this boy.\n";
			cout<<"-----------------------------------------------------------------------------------------------------\n"<<endl;
		list.executeCourt(); // execute the first place(basketball court)

	}

	return 0;
}
