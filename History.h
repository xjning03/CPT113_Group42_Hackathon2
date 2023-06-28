#ifndef HISTORYLIST_H
#define HISTORYLIST_H
#include <iostream>
#include <fstream>
using namespace std ;

class HistoryList{
	private:
		struct listNode{
			string placeName, scene1, scene2, action1, action2;
			listNode *next;
		};

		listNode *head;


	public:
		HistoryList(){
			head = nullptr;
		}

		void appendListNode1(string &p, string &s1, string &a1, string &s2, string &a2){
			listNode *newNode =  new listNode;
			listNode *nodeptr ;
			newNode->placeName = p;
			newNode->scene1 = s1;
			newNode->action1 = a1;
			newNode->scene2 = s2;
			newNode->action2 = a2;
			newNode->next = nullptr;
			//nodeptr = nullptr;

			if(!head)	// if it is an empty list
				head = newNode;

			else{
				nodeptr = head;
				while(nodeptr-> next )
					nodeptr = nodeptr->next;	// transverse until the end of list

				nodeptr->next = newNode;
			}
		}

			void appendListNode2(string &p, string &s1, string &a1, string &s2, string &a2){
			listNode *newNode =  new listNode;
			listNode *nodeptr ;
			newNode->placeName = p;
			newNode->scene1 = s1;
			newNode->action1 = a1;
			newNode->scene2 = s2;
			newNode->action2 = a2;
			newNode->next = nullptr;
			//nodeptr = nullptr;

			if(!head)	// if it is an empty list
				head = newNode;

			else{
				nodeptr = head;
				while(nodeptr){
					nodeptr = nodeptr->next;
					}	// transverse until the end of list

				nodeptr->next = newNode;
			}
		}

		void writeListNode1(){
			fstream file;
			file.open("History1.txt", ios::app);

			listNode *nodeptr ;

			if(!head){
				cout << "Error, the list is empty now.\n"  ;}
			else{
				nodeptr = head;
				while(nodeptr){
					file << "History\n";
					file << nodeptr->placeName << "\n";
					file << nodeptr->scene1 << "\n";
					file << nodeptr->action1 << "\n";
					file << nodeptr->scene2 << "\n";
					file << nodeptr->action2 << "\n";
					nodeptr = nodeptr->next;
				}
			}
			file.close();
		}

		void writeListNode2(){
			fstream file;
			file.open("History2.txt", ios::app);

			listNode *nodeptr = new listNode;
			nodeptr = nullptr;
			if(!head)
				cout << "Error, the list is empty now.\n";
			else{
				nodeptr = head;
				while(nodeptr){
					file << "History\n";
					file << nodeptr->placeName << "\n";
					file << nodeptr->scene1 << "\n";
					file << nodeptr->action1 << "\n";
					file << nodeptr->scene2 << "\n";
					file << nodeptr->action2 << "\n";
					nodeptr = nodeptr->next;
				}
			}

			file.close();
		}

};

#endif
