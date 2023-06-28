# Group42_Hackathon2_UnexpectedEncounters[
# Hackathon2
## 1. Project Description:
   
"Unexpected Encounters" is an interactive multiplayer game about relationships and making decisions. Players are involved in various settings in which they encounter the main character, Jackson.

In the game, players can select from options (Option A, B or C), each with a score that influences their relationship with Jackson. Players actively create the storyline by navigating their character's journey and changing their relationship with Jackson. Players are encouraged to invest their emotions and thoughts in the game.

Embark on this exciting journey to discover a multitude of chapters and scenes set in various locations. From the bustling basketball court to the serene library, the cosy cafe to the enchanting cinema, and the thrilling theme park, each unique setting offers a new and engaging experience. 

Immerse yourself in the interactive storyline, where your decisions throughout the game will turn into multiple possible outcomes. Every decision shapes the narrative and influences your character's relationships and ultimate destiny. This dynamic and branching storyline ensures high replay value, inviting you to explore different paths and uncover different results of the game.


## 2. Project Features:

a. Multiple Player Game 

- A two-player game in which each participant independently makes decisions.

b. Saving and loading history capabilities

- Choose options (Y or y) to continue the game or (N or n) to quit the game after each chapter. If the player chooses to quit the game, the player can save their game progress and resume where they left off at a later time for convenience and continuity. The game progress is stored into two files, each file for each player. Everytime the game starts, the two files that store players’ data will be read by the program, if there is data inside the file, the data (places and action players choose) will print out and players can continue to the chapters or places they haven’t explored, otherwise if there is no data inside, players will start the game from the beginning.

c. Diverse Chapters and Scenes Set in Several Locations

- Explore a series of diverse chapters and scenes set in several locations. Play the game's interactive storyline as you delve into settings like a basketball court, library, cafe, cinema, and theme park. Each location has different scenes and options for players to shape their relationship with our main character and influence the outcome of the game.


d. Choice-based Gameplay

- Choose options (A, B, or C) that correspond to your character's behaviours, thoughts, and emotions when making decisions at crucial points in time.

e. Establishing relationships

- Use action options to engage with Jackson and other characters in order to forge bonds and shape the dynamics of the interactions in the game.


f. Friendly User Interface

- Use an easy-to-use user interface to move through scenes, read descriptions, and make decisions.


## 3. Project Specification:

### 1. Input
   
a. From User:

i. Players choose options (Options A, B, or C) in each scene of the game.

ii. Players choose to continue (Y or y) or quit (N or n) the game after each chapter.

b. From File:

i. Previously saved game data information which are the players’ options (Options A, B, or C) for each scene

ii. Previously saved game data information which are the completed chapters for continuity.

## 2. Process
a. Calculate accumulated marks based on the players' options in each scene.

b. Compare the total marks of the players to determine the strength of their relationship with the main character.

c. Determine whether players have a stronger, weaker, or the same strength of relationship bond with the main character.


## 3.Output

a. Display the accumulated marks for each player after each chapter ends.

b. Display the total accumulated marks at the end of the game.

c. Display whether players have a stronger, weaker, or the same strength of relationship bond with the main character.


## 4.Constraints

a. Players can only choose options A, B, or C in each scene.

b. Players can only choose to continue (Y or y) or quit (N or n) after each chapter.


## 5. Assumptions
a. The game consists of 5 places or chapters, with each chapter having 2 scenes.

b. Each option has a different scoring, which can be positive or negative.

c. The total score for each player is the sum of their scores after each chapter, considering the choices made in each scene.

## 6. Formula

a. Total score = Total score + Score obtained in each scene.


## 4. Object-oriented Concept:

- The game consists of  9 classes:
  
a. FileInclusion (composition class Place) : read the two files that stores historical data, return number of places that the players has go 

b. Place: set the place name, scene1, scene2, action1 and action2 by the values that pass from class BasketballCourt, Library, Cafe, Cinema and ThemePark and pass these values to the HistoryList to append the list node.

c. PlaceList (inherited from class HistoryList and class Place) : used to link a place to the next place when the players want to continue the game.

d. HistoryList : implement a linked-list, append a list node when the players go to one place and write the data that is stored in the linked-list into the players’ history file when the game is ended by the players.

e. BasketballCourt (composition of class Place) : print out the setting and scene in basketball court and get the players’ action

f. Library (composition of class Place): print out the setting and scene in library and get the players’ action

g. Cafe (composition of class Place): print out the setting and scene in cafe and get the players’ action

h. Cinema (composition of class Place): print out the setting and scene in cinema and get the players’ action

i. ThemePark (composition of class Place): print out the setting and scene in theme park and get the players’ action


## 5. Data structures(Linked-list):

Linked list data structure is used in our game. A dynamic linked-list is implemented jin class ‘HistoryList’ so that it can grow and shrink during the program execution. Each node consists of five string data which are placeName, scene1, scene2, action1 and action2 and a pointer to the next node in the list. A default constructor initialise the head There are 4 member functions to manipulate the linked-list:

a. ‘appendListNode1’: appends new node to the end of the list for player 1

b. ‘appendListNode2’: appends new node to the end of the list for player 2

c. ‘writeListNode1’: open the file that stores historical data for player1 and write the contents of the linked list into the file

d. ‘writeListNode2’: open the file that stores historical data for player2 and write the contents of the linked list into the file


## 6. How the Game Play
1. Screenshot 1
   - First time user.
   - The absence of a history file is indicated by the message "The file is not open properly."
     
![Hackathon1](https://github.com/xjning03/Group42_Hackathon2_UnexpectedEncounters/assets/126644899/d549d385-9d8a-44ec-888b-060e68844b67)

2. Screenshot 2
   - After hitting the enter key, the story of Chapter 1 was unveiled.
     
![Hackathon2](https://github.com/xjning03/Group42_Hackathon2_UnexpectedEncounters/assets/126644899/179b1e46-06c7-45d5-98e5-220fc87f6150)

3. Screenshot 3
   - Each chapter consists of two scenes.
   - Two player take turn to choose their preferred actions.
   - They have three options to choose from for each scene.
     
![Hackathon3](https://github.com/xjning03/Group42_Hackathon2_UnexpectedEncounters/assets/126644899/08f28e3b-0dd7-4236-b4cd-e89b86df01bb)

4. Screenshot 4
   - To exit the game, players input 'N' when prompted with the question "Do you want to proceed to the next place? (Y/N)"
   - The score of each player is computed and displayed on the terminal, taking into account their chosen options.
   - The program terminates after displaying the scores.
     
![Screenshot 2023-06-28 150325](https://github.com/xjning03/Group42_Hackathon2_UnexpectedEncounters/assets/126644899/8c5a2d80-f357-4614-80ea-7ca441016127)

5. Screenshot 5
   - The storyline and scores for each player is saved in separate text files: "History1.txt" for player 1 and "History2.txt" for player 2.
     
![Hackathon5](https://github.com/xjning03/Group42_Hackathon2_UnexpectedEncounters/assets/126644899/d97098c1-bebf-4645-b87e-0d76ca7b173a)

6. Screenshot 6
   - The players proceed with the game.
   - The program reads the contents of the "History1.txt" and "History2.txt" files.
   - The terminal displays the previous saved game progress, starting with player 1 and followed by player 2.
     
![Hackathon6](https://github.com/xjning03/Group42_Hackathon2_UnexpectedEncounters/assets/126644899/9d84c1ca-f86b-48f0-aff4-66e22eb7b1d7)

7. Screenshot 7
   - Proceed to Chapter 2.
   - Implement input validation where players are required to reenter their option if it is not within the allowed choices of (A, B, or C).
     
![Hackathon7](https://github.com/xjning03/Group42_Hackathon2_UnexpectedEncounters/assets/126644899/c51c646d-275a-4f91-9342-cc600005902d)

8. Screenshot 8
   - Players choose to continue the game by entering 'Y' when prompted with the question "Do you want to proceed to the next place? (Y/N)"
   - The score of each player is calculated and displayed on the terminal, taking into account their chosen options.
   - The program continues execution to next chapter without interruption.
     
![Hackathon8](https://github.com/xjning03/Group42_Hackathon2_UnexpectedEncounters/assets/126644899/db0b3eda-a581-45e0-a929-4a3b4066e23e)

9. Screenshot 9
    - Implement input validation where players are required to reenter their option if it is not within the allowed choices of ('Y' or 'y') to continue the game, or ('N' or 'n') to quit the game.

![Hackathon9](https://github.com/xjning03/Group42_Hackathon2_UnexpectedEncounters/assets/126644899/6b8e3a85-5bfb-43c7-b269-58ce87cce9af)

10. Screenshot 10
    - The game concludes with a comparison between the relationships of the two players with the main character, Jackson.
    - The storyline and scores for each player is saved in separate text files: "History1.txt" for player 1 and "History2.txt" for player 2.
    - Following this comparison, the program exits.
    
![Hackathon10](https://github.com/xjning03/Group42_Hackathon2_UnexpectedEncounters/assets/126644899/b90dbe13-b5ef-4518-9ffe-c2d29e441026)

11. Screenshot 11
    - The separate text files, "History1.txt" for player 1 and "History2.txt" for player 2, store the entire progress of the game.
    
![Hackathon11](https://github.com/xjning03/Group42_Hackathon2_UnexpectedEncounters/assets/126644899/736e9010-f1cc-4fbc-9124-454c948ad710)

