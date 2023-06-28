#ifndef PlaceList_H
#define PlaceList_H
#include <iostream>
#include <fstream>
#include "History.h"

class PlaceList:public HistoryList , public Place {
	private:
		BasketballCourt *courtPtr;
		Library *libraryPtr;
		Cafe *cafePtr;
		Cinema *cinemaPtr;
		ThemePark *parkPtr;
		bool continueGame;
		char continues;
		int total1, total2; // total until the game end
	public:
		PlaceList(){
			courtPtr = new BasketballCourt();
			libraryPtr = new Library();
			cafePtr = new Cafe();
			cinemaPtr = new Cinema();
			parkPtr = new ThemePark();
		}
		bool nextPlace(){	// return whether the player want to continue the game or not
			cout << "Do you want to proceed to the next place? (Y/N): ";
			cin >> continues;
			while(continues != 'Y' && continues != 'y' && continues != 'N' && continues != 'n'){
				cout << "Only select Y/N: ";
				cin >> continues;
			}
			if(continues == 'Y' || continues == 'y')	// want to continue then proceed with library
				continueGame = true;
			else
				continueGame = false;
			return continueGame;
		}

		void executeCourt(){	// this is the first place
			courtPtr->executebasketball(); // execute the class Basketball Court
			if(nextPlace()){// want to go next place
				fstream file; // store and append player1 scoring into file
				file.open("History1.txt" , ios::app);
				file << getTotalMark1();
				file.close();

				fstream file2; // store and append player2 scoring into file
				file2.open("History2.txt" , ios::app);
				file2 << getTotalMark2();
				file2.close();

				cout<<"Relationship between Player 1 and Jackson "<<getTotalMark1()<<"%"<<endl; // display player 1 scoring
				cout<<"Relationship between Player 2 and Jackson "<<getTotalMark2()<<"%"<<endl; // display player 2 scoring
				cout<<endl;
				executeLibrary();
			}// execute the class Library
			else{// player want to stop the game
				fstream file; // store and append player1 scoring into file
				file.open("History1.txt" , ios::app);
				file << getTotalMark1();
				file.close();

				fstream file2; // store and append player2 scoring into file
				file2.open("History2.txt" , ios::app);
				file2 << getTotalMark2();
				file2.close();
				cout<<"Relationship between Player 1 and Jackson "<<getTotalMark1()<<"%"<<endl; // display player 1 scoring
				cout<<"Relationship between Player 2 and Jackson "<<getTotalMark2()<<"%"<<endl; // display player 2 scoring
			}
		}

		void executeLibrary(){
			libraryPtr->executelibrary();
			if(nextPlace()){// want to go next place
				fstream file; // store and append player1 scoring into file
				file.open("History1.txt" , ios::app); 
				file << getTotalMark1();
				file.close();

				fstream file2; // store and append player2 scoring into file
				file2.open("History2.txt" , ios::app);
				file2 << getTotalMark2();
				file2.close();

			  	cout<<"Relationship between Player 1 and Jackson "<<getTotalMark1()<<"%"<<endl; // display player 1 scoring
				cout<<"Relationship between Player 2 and Jackson "<<getTotalMark2()<<"%"<<endl; // display player 2 scoring
				cout<<endl;
				executeCafe();	// execute the class cafe
			}
			else{	// player want to stop the game
				fstream file;
				file.open("History1.txt" , ios::app);
				file << getTotalMark1();
				file.close();

				fstream file2;// store player2 data into a file
				file2.open("History2.txt" , ios::app);
				file2 << getTotalMark2();
				file2.close(); 	// store player2 data into a file
				cout<<"Relationship between Player 1 and Jackson "<<getTotalMark1()<<"%"<<endl; // display player 1 scoring
				cout<<"Relationship between Player 2 and Jackson "<<getTotalMark2()<<"%"<<endl; // display player 2 scoring
			}
		}
		void executeCafe(){
			cafePtr->executecafe();
			if(nextPlace()){// want to go next place
				fstream file; // store and append player1 scoring into file
				file.open("History1.txt" , ios::app);
				file << getTotalMark1();
				file.close();

				fstream file2; // store and append player2 scoring into file
				file2.open("History2.txt" , ios::app);
				file2 << getTotalMark2();
				file2.close();

			  	cout<<"Relationship between Player 1 and Jackson "<<getTotalMark1()<<"%"<<endl; // display player 1 scoring
				cout<<"Relationship between Player 2 and Jackson "<<getTotalMark2()<<"%"<<endl; // display player 2 scoring
				cout<<endl;
				executeCinema();	// execute the class cinema
			}
			else{	// player want to stop the game
				fstream file; // store and append player1 scoring into file
				file.open("History1.txt" , ios::app);
				file << getTotalMark1();
				file.close();

				fstream file2; // store and append player2 scoring into file
				file2.open("History2.txt" , ios::app);
				file2 << getTotalMark2();
				file2.close();
				cout<<"Relationship between Player 1 and Jackson "<<getTotalMark1()<<"%"<<endl; // display player 1 scoring
				cout<<"Relationship between Player 2 and Jackson "<<getTotalMark2()<<"%"<<endl; // display player 2 scoring
			}
		}
		void executeCinema(){
			cinemaPtr->executecinema();
			if(nextPlace()){// want to go next place
				fstream file; // store and append player1 scoring into file
				file.open("History1.txt" , ios::app);
				file << getTotalMark1();
				file.close();

				fstream file2; // store and append player2 scoring into file
				file2.open("History2.txt" , ios::app);
				file2 << getTotalMark2();
				file2.close();

			  	cout<<"Relationship between Player 1 and Jackson "<<getTotalMark1()<<"%"<<endl; // display player 1 scoring
				cout<<"Relationship between Player 2 and Jackson "<<getTotalMark2()<<"%"<<endl; // display player 2 scoring
				cout<<endl;
				executePark();	// execute the class Park
			}
			else{
				fstream file; // store and append player1 scoring into file
				file.open("History1.txt" , ios::app);
				file << getTotalMark1();
				file.close();

				fstream file2; // store and append player1 scoring into file
				file2.open("History2.txt" , ios::app);
				file2 << getTotalMark2();
				file2.close();
				
				cout<<"Relationship between Player 1 and Jackson "<<getTotalMark1()<<"%"<<endl; // display player 1 scoring
				cout<<"Relationship between Player 2 and Jackson "<<getTotalMark2()<<"%"<<endl; // display player 2 scoring
			}
		}
		void executePark(){	// this is the last place
			parkPtr->executepark();
			getTotalMark1();
			getTotalMark2 ();
				fstream file; // store and append player1 scoring into file
				file.open("History1.txt" , ios::app); 
				file << getTotalMark1();
				file.close();

				fstream file2; // store and append player2 scoring into file
				file2.open("History2.txt" , ios::app);
				file2 << getTotalMark2();
				file2.close();
			// comparison between player1 scoring and player2 scoring
			cout << "Player 1 has " << getTotalMark1()<<"%"<< " and " << "Player 2 has " << getTotalMark2() <<"%"<< endl;
			if (getTotalMark1() > getTotalMark2()){
					cout << "Player 1 has a stronger relationship with Jackson. " << endl;
			}
      			else if (getTotalMark1() == getTotalMark2()){
          				 cout << "Player 1 and Player 2 has equally strong relationship with Jackson." << endl;
     			 }
			else {
				cout <<" Player 2 has a stronger relationship with Jackson." << endl;
			}

		}
};

#endif
