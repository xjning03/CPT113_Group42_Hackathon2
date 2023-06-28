#ifndef BASKETBALL_H
#define BASKEETBALL_H
#include "Place.h"
#include <iostream>
using namespace std ;

class BasketballCourt{
	private:
		char action1, action2; // action1 : player2, action2: player 2
		int total1, total2;
		Place p1, p2; // use composition to set the data for each player
	public:
		BasketballCourt(){
			p1.setPlaceName("Basketball Court");
			p2.setPlaceName("Basketball Court");
		}
		void executebasketball(){
			basketball1();
			basketball2();
		}

		void basketball1(){
			cout<< "Press Enter to be continued..."<<endl;
			cin.get();
			p1.setScene1("After first match, you courageously walk up to Jackson and... ");
			p2.setScene1("After first match, you courageously walk up to Jackson and... ");
			cout << "After first match, you courageously walk up to Jackson and... \n";
			cout << "A. Gives energy drinks\n";
			cout << "B. Offer him a towel\n";
			cout << "C. Making hurtful comments about his basketball skill\n";
			
			cout << endl<< "Input player1 option (exp: A B): \n";
			cin >> action1;
			while((action1 != 'A' && action1 != 'B' && action1 != 'C')){
				cout<<"Invalid input. Please reenter: ";
				cin>>action1;
			}
			cout << endl<< "Input player2 option (exp: A B): \n";
			cin >> action2;
			while((action2 != 'A' && action2 != 'B' && action2 != 'C')){
				cout<<"Invalid input. Please reenter: ";
				cin>>action2;
			}
			
				if(action1 == 'A'){	// for player 1
					p1.setAction1("Gives energy drink");
					p1.addMark1(15);
				}
				if(action2 == 'A'){	// for player 2
					p2.setAction1("Gives energy drink");
					p2.addMark2(15);
				}

				if(action1 == 'B'){	// for player 1
					p1.setAction1("Offer him a towel");
					p1.addMark1(10);
				}
				if(action2 == 'B'){	// for player 2
					p2.setAction1("Offer him a towel");
					p2.addMark2(10);
				}

				if(action1 == 'C'){	// for player 1
					p1.setAction1("Making hurtful comments about his basketball skill");
					p1.addMark1(-20);
				}
				if(action2 == 'C'){	// for player 2
					p2.setAction1("Making hurtful comments about his basketball skill");
					p2.addMark2(-20);
				}

		}
		void basketball2(){
			// continueing the story
			cout<< endl<< "The moment did not take long as the referee had blown out his whistle, signaling the start of another match.\n";
			cout<< "Before bidding our farewell, we promised to meet again afterward.\n";
			cout<< endl<<"Press Enter to be continued..."<<endl;
			cin.ignore();
			cin.get();
			p1.setScene2("The match ended with the loss of our team. You walked towards him worrisomely and...");
			p2.setScene2("The match ended with the loss of our team. You walked towards him worrisomely and....");
			cout << "The match ended with the loss our team. You walked towards him worrisomely and...\n";
			cout << "A. Offer words of consolation and support \nB. Badmouth about his team that causes the lost\n";
			cout << "C. Ask him out to lift the mood\n";
			
			cout << endl<< "Input player1 option (exp: A B): \n";
			cin >> action1;
			while((action1 != 'A' && action1 != 'B' && action1 != 'C')){
				cout<<"Invalid input. Please reenter: ";
				cin>>action1;
			}
			cout << endl<< "Input player2 option (exp: A B): \n";
			cin >> action2;
			
			while((action2 != 'A' && action2 != 'B' && action2 != 'C')){
				cout<<"Invalid input. Please reenter: ";
				cin>>action2;
			}
		
				if(action1 == 'A'){	// for player 1
					p1.setAction2("Offer words of consolation and support");
					p1.addMark1(10);
				}
				if(action2 == 'A'){	// for player 2
					p2.setAction2("Offer words of consolation and support");
					p2.addMark2(10);
				}

				if(action1 == 'B'){	// for player 1
					p1.setAction2("Badmouth about his team that causes the lost");
					p1.addMark1(-10);
				}
				if(action2 == 'B'){	// for player 2
					p2.setAction2("Badmouth about his team that causes the lost");
					p2.addMark2(-10);
				}

				if(action1 == 'C'){	// for player 1
					p1.setAction2("Ask him out to lift the mood");
					p1.addMark1(15);
				}
				if(action2 == 'C'){	// for player 2
					p2.setAction2("Ask him out to lift the mood");
					p2.addMark2(15);
				}

			p1.appendData1();
			p2.appendData2();
		}
};

class Library{
	private:
		char action1, action2; // action1 : player2, action2: player 2
		Place p1, p2; // use composition to set the data for each player
	public:
		Library(){
			p1.setPlaceName("Library");
			p2.setPlaceName("Library");
		}
		void executelibrary(){
			library1();
			library2();
		}
		void library1(){
			cout<<"-----------------------------------------------------------------------------------------------------"<<endl;
			cout << "					Chapter 2"<<endl;
			cout << "After you encounter with Jackson at the basketball competition,\n";
			cout << "your curiosity is sparked, and you're determined to find more about him.\n";
			cout <<	"You realise that Jackson is a bibliophile, a lover of books.\n";
			cout << "With this newfound knowledge, you visit the library, hoping to see him once more.\n" ;
			cout<<"-----------------------------------------------------------------------------------------------------"<<endl;
			p1.setScene1("You found him was sleeping soundly at one of the corners with sun rays shining on his face. You decide to...");
			p2.setScene1("You found him was sleeping soundly at one of the corners with sun rays shining on his face. You decide to...");
			cout<< endl<< "Press Enter to be continued..."<<endl;
			cin.ignore();
			cin.get();
			cout << "You found him was sleeping soundly at one of the corners with sun rays shining on his face.\n";
			cout << "You decide to...\n";
			cout << "A. Find a book and sit quietly beside him, waiting for him to wake up and engage in a book-related discussion\n";
			cout << "B. Wake him up and reprimand him for sleeping in the library\n";
			cout << "C. Quietly sit behind him and help him block the sun rays\n";
			
			cout << endl<< "Input player1 option (exp: A B): \n";
			cin >> action1;
			while((action1 != 'A' && action1 != 'B' && action1 != 'C')){
				cout<<"Invalid input. Please reenter: ";
				cin>>action1;
			}
			cout << endl<< "Input player2 option (exp: A B): \n";
			cin >> action2;
			while((action2 != 'A' && action2 != 'B' && action2 != 'C')){
				cout<<"Invalid input. Please reenter: ";
				cin>>action2;
			}
			
				if(action1 == 'A'){	// for player 1
					p1.setAction1("Find a book and sit quietly beside him, waiting for him to wake up and engage in a book-related discussion");
					p1.addMark1(15);
				}
				if(action2 == 'A'){	// for player 2
					p2.setAction1("Find a book and sit quietly beside him, waiting for him to wake up and engage in a book-related discussion");
					p2.addMark2(15);
				}

				if(action1 == 'B'){	// for player 1
					p1.setAction1("Wake him up and reprimand him for sleeping in the library");
					p1.addMark1(-10);
				}
				if(action2 == 'B'){	// for player 2
					p2.setAction1("Wake him up and reprimand him for sleeping in the library");
					p2.addMark2(-10);
				}

				if(action1 == 'C'){	// for player 1
					p1.setAction1("Quietly sit behind him and help him block the sun rays");
					p1.addMark1(20);
				}
				if(action2 == 'C'){	// for player 2
					p2.setAction1("Quietly sit behind him and help him block the sun rays");
					p2.addMark2(20);
				}
				cout<<endl;
		}
		void library2(){
			// continueing the story
			p1.setScene2("Finally, Jackson stirs from his slumber, blinking his eyes as he adjusts to the surroundings. He notices you. You...");
			p2.setScene2("Finally, Jackson stirs from his slumber, blinking his eyes as he adjusts to the surroundings. He notices you. You...");
			cout << "Finally, Jackson stirs from his slumber, blinking his eyes as he adjusts to the surroundings. \n";
			cout << "He notices you. You...\n";
			cout << "A. Greet him\n";
			cout << "B. Pat his head\n";
			cout << "C. Show concern about his fatigueless and continue the conversation\n";
			
			cout << endl<< "Input player1 option (exp: A B): \n";
			cin >> action1;
			while((action1 != 'A' && action1 != 'B' && action1 != 'C')){
				cout<<"Invalid input. Please reenter: ";
				cin>>action1;
			}
			cout << endl<< "Input player2 option (exp: A B): \n";
			cin >> action2;
			while((action2 != 'A' && action2 != 'B' && action2 != 'C')){
				cout<<"Invalid input. Please reenter: ";
				cin>>action2;
			}

				if(action1 == 'A'){	// for player 1
					p1.setAction2("Greet him");
					p1.addMark1(10);
				}
				if(action2 == 'A'){	// for player 2
					p2.setAction2("Greet him");
					p2.addMark2(10);
				}

				if(action1 == 'B'){	// for player 1
					p1.setAction2("Pat his head");
					p1.addMark1(-10);
				}
				if(action2 == 'B'){	// for player 2
					p2.setAction2("Pat his head");
					p2.addMark2(-10);
				}

				if(action1 == 'C'){	// for player 1
					p1.setAction2("Show concern about his fatigueless and continue the conversation");
					p1.addMark1(20);
				}
				if(action2 == 'C'){	// for player 2
					p2.setAction2("Show concern about his fatigueless and continue the conversation");
					p2.addMark2(20);
				}

			p1.appendData1();
			p2.appendData2();
			}
};

class Cafe{
	private:
		char action1, action2; // action1 : player2, action2: player 2
		Place p1, p2; // use composition to set the data for each player

	public:
		Cafe(){
			p1.setPlaceName("Cafe");
			p2.setPlaceName("Cafe");
		}
		void executecafe(){
			cafe1();
			cafe2();
		}
		void cafe1(){
			cout<<"-----------------------------------------------------------------------------------------------------"<<endl;
			cout << "					Chapter 3"<<endl;
			cout << "After spending a great time together at library,"<<endl;
			cout << "You decide to take the next step and ask Jackson out for lunch at cafe."<<endl;
			cout << "His face brightens up with a bright smile and gladly accepts your invitation.\n";
			cout<<"-----------------------------------------------------------------------------------------------------"<<endl;
			p1.setScene1("On the day, unforeseen circumstances led to you arriving late. You...");
			p2.setScene1("On the day, unforeseen circumstances led to you arriving late. You...");
			cout <<endl<< "Press Enter to be continued..."<<endl;
			cin.ignore();
			cin.get();
			cout << "On the day, unforeseen circumstances led to you arriving late. \n";
			cout << "You...\n";
			cout << "A. Apologise for your late arrival\n";
			cout << "B. Reprimand him for coming early\n";
			cout << "C. Express your gratitude and admiration for his patience\n";
			
			cout << endl<< "Input player1 option (exp: A B): \n";
			cin >> action1;
			while((action1 != 'A' && action1 != 'B' && action1 != 'C')){
				cout<<"Invalid input. Please reenter: ";
				cin>>action1;
			}
			cout << endl<< "Input player2 option (exp: A B): \n";
			cin >> action2;
			while((action2 != 'A' && action2 != 'B' && action2 != 'C')){
				cout<<"Invalid input. Please reenter: ";
				cin>>action2;
			}
			
				if(action1 == 'A'){	// for player 1
					p1.setAction1("Apologise for your late arrival");
					p1.addMark1(5);
				}
				if(action2 == 'A'){	// for player 2
					p2.setAction1("Apologise for your late arrival");
					p2.addMark2(5);
				}

				if(action1 == 'B'){	// for player 1
					p1.setAction1("Reprimand him for coming early");
					p1.addMark1(-10);
				}
				if(action2 == 'B'){	// for player 2
					p2.setAction1("Reprimand him for coming early");
					p2.addMark2(-10);
				}

				if(action1 == 'C'){	// for player 1
					p1.setAction1("Express your gratitude and admiration for his patience");
					p1.addMark1(20);
				}
				if(action2 == 'C'){	// for player 2
					p2.setAction1("Express your gratitude and admiration for his patience");
					p2.addMark2(20);
				}

		}
		void cafe2(){
			// continueing the story
			p1.setScene2("Jackson unintentionally spills his tea, which causes it to pour onto your clean white dress. Immediately as his eyes widen in alarm, he makes an apology-seeking face. Observing his apologetic expression, you...");
			p2.setScene2("Jackson unintentionally spills his tea, which causes it to pour onto your clean white dress. Immediately as his eyes widen in alarm, he makes an apology-seeking face. Observing his apologetic expression, you...");
			cout << "\nJackson unintentionally spills his tea, which causes it to pour onto your clean white dress."<<endl;
			cout << "Immediately as his eyes widen in alarm, he makes an apology-seeking face.\n";
			cout << "Observing his apologetic expression, you...\n";
			cout << "A. Enrage by his action and yell at him\n";
			cout << "B. Understand and forgive him\n";
			cout << "C. Playfully request him to buy you a new white dress\n";
			
			cout << endl<< "Input player1 option (exp: A B): \n";
			cin >> action1;
			while((action1 != 'A' && action1 != 'B' && action1 != 'C')){
				cout<<"Invalid input. Please reenter: ";
				cin>>action1;
			}
			cout << endl<< "Input player2 option (exp: A B): \n";
			cin >> action2;
			while((action2 != 'A' && action2 != 'B' && action2 != 'C')){
				cout<<"Invalid input. Please reenter: ";
				cin>>action2;
			}

				if(action1 == 'A'){	// for player 1
					p1.setAction2("Enrage by his action and yell at him");
					p1.addMark1(-10);
				}
				if(action2 == 'A'){	// for player 2
					p2.setAction2("Enrage by his action and yell at him");
					p2.addMark2(-10);
				}

				if(action1 == 'B'){	// for player 1
					p1.setAction2("Understand and forgive him");
					p1.addMark1(10);
				}
				if(action2 == 'B'){	// for player 2
					p2.setAction2("Understand and forgive him");
					p2.addMark2(10);
				}

				if(action1 == 'C'){	// for player 1
					p1.setAction2("Playfully request him to buy you a new white dress");
					p1.addMark1(10);
				}
				if(action2 == 'C'){	// for player 2
					p2.setAction2("Playfully request him to buy you a new white dress");
					p2.addMark2(10);
				}

			 	p1.appendData1();
				p2.appendData2();
				}
};

class Cinema{
	private:
		char action1, action2; // action1 : player2, action2: player 2
		Place p1, p2; // use composition to set the data for each player

	public:
		Cinema(){
			p1.setPlaceName("Cinema");
			p2.setPlaceName("Cinema");
		}
		void executecinema(){
			cinema1();
			cinema2();
		}
		void cinema1(){
			cout<<"-----------------------------------------------------------------------------------------------------"<<endl;
			cout << "					Chapter 4"<<endl;
			cout << "Jackson and you are enjoying one other's company while sitting at the cafe,"<<endl;
			cout << "but there is a pause in the conversation that makes you feel bored."<<endl;
			cout << "You suggest the idea of going to the movies as a way to add some excitement to the evening.\n";
			cout<<"-----------------------------------------------------------------------------------------------------"<<endl;
			cout<< endl<< "Press Enter to be continued..."<<endl;
			cin.ignore();
			cin.get();
			p1.setScene1("You are considering several movie genres and themes. The choice of what movie to watch must be made now and you choose to watch...");
			p2.setScene1("You are considering several movie genres and themes. The choice of what movie to watch must be made now and you choose to watch...");
			cout << "You are considering several movie genres and themes."<<endl;
			cout << "The choice of what movie to watch must be made now and you choose to watch...\n";
			cout << "A. Titanic\n";
			cout << "B. The Nun\n";
			cout << "C. Mr Bean\n";
			
			cout << endl<< "Input player1 option (exp: A B): \n";
			cin >> action1;
			while((action1 != 'A' && action1 != 'B' && action1 != 'C')){
				cout<<"Invalid input. Please reenter: ";
				cin>>action1;
			}
			cout << endl<< "Input player2 option (exp: A B): \n";
			cin >> action2;
			while((action2 != 'A' && action2 != 'B' && action2 != 'C')){
				cout<<"Invalid input. Please reenter: ";
				cin>>action2;
			}

				if(action1 == 'A'){	// for player 1
					p1.setAction1("Titanic");
					p1.addMark1(10);
				}
				if(action2 == 'A'){	// for player 2
					p2.setAction1("Titanic");
					p2.addMark2(10);
				}


				if(action1 == 'B'){	// for player 1
					p1.setAction1("The Nun");
					p1.addMark1(20);
				}
				if(action2 == 'B'){	// for player 2
					p2.setAction1("The Nun");
					p2.addMark2(20);
				}

				if(action1 == 'C'){	// for player 1
					p1.setAction1("Mr Bean");
					p1.addMark1(-5);
				}
				if(action2 == 'C'){	// for player 2
					p2.setAction1("Mr Bean");
					p2.addMark2(-5);
				}
		}
		void cinema2(){
			// continueing the story
			p1.setScene2("During movie, you...");
			p2.setScene2("During movie, you...");
			cout << "During movie, you...\n";
			cout << "A. Snatch his popcorn\n";
			cout << "B. Being talkative\n";
			cout << "C. Pay attention to the movie\n";
			
			cout << endl<< "Input player1 option (exp: A B): \n";
			cin >> action1;
			while((action1 != 'A' && action1 != 'B' && action1 != 'C')){
				cout<<"Invalid input. Please reenter: ";
				cin>>action1;
			}
			cout << endl<< "Input player2 option (exp: A B): \n";
			cin >> action2;
			while((action2 != 'A' && action2 != 'B' && action2 != 'C')){
				cout<<"Invalid input. Please reenter: ";
				cin>>action2;
			}

				if(action1 == 'A'){	// for player 1
					p1.setAction2("Snatch his popcorn");
					p1.addMark1(-10);
				}
				if(action2 == 'A'){	// for player 2
					p2.setAction2("Snatch his popcorn");
					p2.addMark2(-10);
				}

				if(action1 == 'B'){	// for player 1
					p1.setAction2("Being talkative");
					p1.addMark1(-20);
				}
				if(action2 == 'B'){	// for player 2
					p2.setAction2("Being talkative");
					p2.addMark2(-20);
				}

				if(action1 == 'C'){	// for player 1
					p1.setAction2("Pay attention to the movie");
					p1.addMark1(10);
				}
				if(action2 == 'C'){	// for player 2
					p2.setAction2("Pay attention to the movie");
					p2.addMark2(10);
				}

			p1.appendData1();
			p2.appendData2();

		}

};

class ThemePark{
	private:
		char action1, action2; // action1 : player2, action2: player 2
		Place p1, p2; // use composition to set the data for each player
	public:
		ThemePark(){
			p1.setPlaceName("Theme Park");
			p2.setPlaceName("Theme Park");
		}
		void executepark(){
			park1();
			park2();
		}

		void park1(){
			cout<<"-----------------------------------------------------------------------------------------------------"<<endl;
			cout << "					Chapter 5"<<endl;
			cout << "After getting to know Jackson for a few days, a new opportunity arises for you to know more about him.\n";
			cout << "At a spin and win event,"<<endl;
			cout << "you find yourself with good fortune when you win two tickets to an exhilarating theme park.\n";
			cout << "You gather your bravery and invite Jackson to join you again, and he accepts your invitation."<<endl;
			cout << "-----------------------------------------------------------------------------------------------------"<<endl;
			cout << endl<< "Press Enter to be continued..."<<endl;
			cin.ignore();
			cin.get();
			p1.setScene1("On the day, the morning light shines a beautiful glow over you and Jackson as you enter the lively theme park. You...");
			p2.setScene1("On the day, the morning light shines a beautiful glow over you and Jackson as you enter the lively theme park. You...");
			cout << "On the day, "<<endl;
			cout << "the morning light shines a beautiful glow over you and Jackson as you enter the lively theme park. "<<endl;
			cout << "You...\n";
			cout << "A. Take leisure stroll while sharing stories\n";
			cout << "B. Engage in a friendly competition at the arcade and teasing each other\n";
			cout << "C. Start the day with roller coaster ride, feeling the adrenaline rush\n";
			
			cout << endl<< "Input player1 option (exp: A B): \n";
			cin >> action1;
			while((action1 != 'A' && action1 != 'B' && action1 != 'C')){
				cout<<"Invalid input. Please reenter: ";
				cin>>action1;
			}
			cout << endl<< "Input player2 option (exp: A B): \n";
			cin >> action2;
			while((action2 != 'A' && action2 != 'B' && action2 != 'C')){
				cout<<"Invalid input. Please reenter: ";
				cin>>action2;
			}

				if(action1 == 'A'){	// for player 1
					p1.setAction1("Take leisure stroll while sharing stories");
					p1.addMark1(15);
				}
				if(action2 == 'A'){	// for player 2
					p2.setAction1("Take leisure stroll while sharing stories");
					p2.addMark2(15);
				}

				if(action1 == 'B'){	// for player 1
					p1.setAction1("Engage in a friendly competition at the arcade and teasing each other");
					p1.addMark1(20);
				}
				if(action2 == 'B'){	// for player 2
					p2.setAction1("Engage in a friendly competition at the arcade and teasing each other");
					p2.addMark2(20);
				}

				if(action1 == 'C'){	// for player 1
					p1.setAction1("Start the day with roller coaster ride, feeling the adrenaline rush");
					p1.addMark1(-10);
				}
				if(action2 == 'C'){	// for player 2
					p2.setAction1("Start the day with roller coaster ride, feeling the adrenaline rush");
					p2.addMark2(-10);
				}

			// after the if...else condition then continue to scene2(call basketball2 function)
			//park2();
		}
		void park2(){
			// continueing the story
			p1.setScene2("As the sun begins to set, casting a warm glow over the theme park, you and Jackson decide to round off your exciting day with a ride on the wonderful Ferris wheel. You...");
			p2.setScene2("As the sun begins to set, casting a warm glow over the theme park, you and Jackson decide to round off your exciting day with a ride on the wonderful Ferris wheel. You...");
			cout << "As the sun begins to set, casting a warm glow over the theme park, "<<endl;
			cout << "you and Jackson decide to round off your exciting day with a ride on the wonderful Ferris wheel.\n";
			cout << "You...\n";
			cout << "A. Feel anxious and uneasy during the ride, unable to fully relax and enjoy the moment\n";
			cout << "B. Share your emotions, expressing your happiness and gratitude to him\n";
			cout << "C. Tease him for his fear of height\n";
			
			cout << endl<< "Input player1 option (exp: A B): \n";
			cin >> action1;
			while((action1 != 'A' && action1 != 'B' && action1 != 'C')){
				cout<<"Invalid input. Please reenter: ";
				cin>>action1;
			}
			cout << endl<< "Input player2 option (exp: A B): \n";
			cin >> action2;
			while((action2 != 'A' && action2 != 'B' && action2 != 'C')){
				cout<<"Invalid input. Please reenter: ";
				cin>>action2;
			}

				if(action1 == 'A'){	// for player 1
					p1.setAction2("Feel anxious and uneasy during the ride, unable to fully relax and enjoy the moment");
					p1.addMark1(-5);
				}
				if(action2 == 'A'){	// for player 2
					p2.setAction2("Feel anxious and uneasy during the ride, unable to fully relax and enjoy the moment");
					p2.addMark2(-5);
				}

				if(action1 == 'B'){	// for player 1
					p1.setAction2("Share your emotions, expressing your happiness and gratitude to him");
					p1.addMark1(20);
				}
				if(action2 == 'B'){	// for player 2
					p2.setAction2("Share your emotions, expressing your happiness and gratitude to him");
					p2.addMark2(20);
				}

				if(action1 == 'C'){	// for player 1
					p1.setAction2("Tease him for his fear of height");
					p1.addMark1(5);
				}
				if(action2 == 'C'){	// for player 2
					p2.setAction2("Tease him for his fear of height");
					p2.addMark2(5);
				}
				p1.appendData1();
				p2.appendData2();
		}

};

#endif
