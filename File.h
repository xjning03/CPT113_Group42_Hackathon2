#ifndef FILE_H
#define FILE_H
#include "History.h"
#include "Place.h"
#include <iostream>
#include <string>
using namespace std ;

class FileInclusion{
	private:
		string fileName;
		string data;
		string place, scene1, scene2, action1, action2;
		int  marks ;
		int count = 0;
		HistoryList listFile1 , listFile2 ; // composition of class HistoryList
		Place p1, p2;
	public:
		void setFileName(string n){
			fileName = n ;
		}

		bool readFile(){
			fstream file;
			file.open(fileName, ios::in);

			if(!file){	// if the file is not open
				cout << "The file is not open properly.\n";
				return false ;
		}
			if(!getline(file, data)) // if the file is empty
				return false; // return false to main means no file need to be read

			else{	// if the file comtain data, read and print the content inside the file and return ttrue

				while(getline(file, data)){
					cout << data << "\n";	//print the place
					place = data;
					getline(file, data);
					cout << data << "\n";	// print the first scene
					scene1 = data;
					getline(file, data);
					cout << data << "\n";	// print the first action the player choose
					action1 = data;
					getline(file, data);
					cout << data << "\n";	// print the second scene
					scene2 = data;
					getline(file, data);
					cout << data << "\n";	// print the second action player choose
					action2 = data;
					getline (file,data);
					marks = stoi(data) ;
					cout<<marks<<endl;
					count ++; // count = 1 means alr go to place 1, count=2 means alr go to place2...
				}
				if(fileName=="History1.txt"){
						p1.addMark1(marks);
					}
					else{
						p2.addMark2(marks);
					}
				return true;
			}
			file.close();	// close the file
		}

		int getCount(){
			return count;
		}

};

#endif
