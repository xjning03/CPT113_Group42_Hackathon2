#ifndef PLACE_H
#define PLACE_H
#include "History.h"


class Place{
	private:
		string placeName, scene1, scene2, action1, action2;
	 	static int totalMark1  , totalMark2 ;
		HistoryList listPlace1;
		HistoryList listPlace2 ;
	public:
		void setPlaceName(string p){
			placeName = p;
		}
		void setScene1(string s1){
			scene1 = s1;
		}
		void setScene2(string s2){
			scene2 = s2;
		}
		void setAction1(string a1){
			action1 = a1;
		}
		void setAction2(string a2){
			action2 = a2;
		}
		void appendData1(){
			listPlace1.appendListNode1(placeName, scene1, action1, scene2, action2);
			listPlace1.writeListNode1();
		}

		void appendData2(){
			listPlace2.appendListNode2(placeName, scene1, action1, scene2, action2);
			listPlace2.writeListNode2();
		}

		void addMark1(int mark){
			totalMark1 += mark;
		}

		void addMark2 (int mark){
			totalMark2 += mark ;
		}

		int getTotalMark1(){
			return totalMark1;
				}

		int getTotalMark2(){
			return totalMark2;
		}
};

int Place :: totalMark1 = 0;
int Place :: totalMark2 = 0;

#endif
