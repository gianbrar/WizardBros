#include <iostream>
#include <string>
#include <fstream>
#include "save.h"
using namespace std;

save data;
string scondierConf;
string commandResponse;
string saveInfo;
string saveFile;
ifstream save;
ifstream headerFile;
void enterToContinue;
int deathCode;
int i;
int chapter;
int killNum = -1;
bool firstCommand = true;
bool commandUsed = false;

int nameScondier() {
	cout << "You have just activated the NAME scondier. The name is changeable.";
	cin >> data.name;
	if (data.name == "changeable") {
		cout << "Level 20 mage bro gives you a thumbs up. Finally, someone who understands his godly sense of humor."
	}
	else {
		cout << "Name registered as " << data.name;
	}
	return 0;
}
int deathScondier() {
	cout << "CONGRATULATIONS! DEATH scondier has been activated. You are dead.";
	cout << "REASON FOR DEATH: " << deathCode << "\nPlease consult CODE scondier for translation of death code.";
	exit(EXIT_SUCCESS);
	return 0;
}
int helpScondier() {
	cout << "You have just activated HELP scondier.\nActivate asssistance for scondiers (y) or for story? (n)";
	cin >> scondierConf;
	if (scondierConf == "y") {
		cout << "Here are the following scondier activation commands:\nco: Activates CODE scondier\nc: Activates COMMAND scondier\nd: Activates DEATH scondier [PRESS ENTER TO CONTIUE]";
        cin >> enterToContinue;
	}
	else if (scondierConf == "n") {
        cout << "Actual story coming soon!";
	}
	else {
		cout << "Not an option! DIE FOOL!";
		deathCode = 00000000;
		deathScondier();
	}
	return 0;
}

int codeScondier() {
	cout << "You have just activated the CODE scondier. Please convert your binary code into a number.\nCODES:\n0: Made a stupid mistake\n1: Died of a monster with a level of 0-3\n2: Died of a monster with a level of 4-7\n3: Died of a monster with a level of 8-11\n4: Died of a monster with a level of 12-15\n5: Died of a monster with a level of 16-19\n6: Died of a monster with a level of 20\n7: Died of a BASEmAGE (Level 0-3)\n8: Died of an eXmAGE (Level 4-7)\n9: Died of an @eXmAGE (Level 8-11)\n10: Died of a sKONKmAGE (Level 12-15)\n11: Died of an @sKONKmAGE (Level 16-19)\n12: Died of the SUPREME MAGE (Level 20)\n13: Committed suicide [PRESS ENTER TO CONTINUE]";
	cin >> enterToContinue;
	return 0;
}
int saveScondier() {
	cout << "You have just activated the SAVE scondier. Save game? (y/n)";
	cin >> scondierConf;
	if (scondierConf == "y") {
		saveFile = "#include <string>\nusing namespace std;\n\nclass save {\n    string name = " + data.name + ";\n    firstGame = " + data.firstGame + ";\n    chapter = " + data.chapter + ";" + "\n};";
		save >> saveFile;
		killNum = -1;
	}
	else if (scondierConf == "n") {
		cout << "Well silly, then why did you activate this particular scondier in the first place? Pssshhhhhh...";
		killNum = -1;
	}
	else {
		if (killNum == 0) {
			cout << "Error! Please try again!";
			saveScondier();
		}
	}
	return 0;
}
int commandScondier() {
	if (firstCommand == true) {
		cout << "You have just activated the COMMAND scondier. It is quite stupid of you do have done so instead of starting the story. Oh well, as they say, sHjkldsfhja SDuviOWkjsadnf. Please consult HELP scondier (h) to learn about game and scondier commands.";
		cin >> commandResponse;
	}
	else if (commandUsed == true) {
		cout << "";
		cin >> commandResponse;
	}
	else {
		cout << "You have just activated the COMMAND scondier. Please consult HELP scondier (h) to learn about game and scondier commands.";
		cin >> commandResponse;
	}
	commandUsed = true;
	firstCommand = true;
	if (commandResponse == "h") {
		helpScondier();
	}
	else if (commandResponse == "co") {
		codeScondier();
	}
	else if (commandResponse == "n") {
		nameScondier();
	}
	else if (commandResponse == "d") {
		deathCode = 00001101;
		deathScondier();
	}
	cout << "Enter another command (y/n)";
	cin >> scondierConf;
	if (scondierConf == "y") {
		commandScondier();
	}
	return 0;
}
int accessDenied() {
	cout << "Error! You do not have access to that chapter!";
	return 0;
}
int chapterZero() {
	return 0;
}
int chapterOne() {
    cout << "From a distance, a penguin looks at you. Though one would expect a normal penguin, this penguin is in fact something else. [PRESS ENTER TO CONTINUE]";
    cin >> enterToContinue;
    cout << "FOR THIS PENGUIN WAS A WIZARD!1!1!1!!11!!1 (spooky!) The penguin suddenly dies due to a raging Swiss Cheese. This shall be explained at a later date with time shenanagins. [PRESS ENTER TO CONTINUE]";
	cin >> enterToContinue;
	cout << "Regardless of the previous events, which you think to be a form of strange folly whose creator deserves death an eternal suffering, you find yourself in your room. [PRESS ENTER TO STOP THESE STUPID MESSAGES]":
    cin >> enterToContinue;
    cout << "NO!!! Despite the silliness of the penguin wizards of yonder, you take a rather odd fondness towards the [PRESS ENTER TO CONTINUE] boxes. Speaking of, [PRESS ENTER TO CONTINUE]";
    cin >> enterToContinue;
    cout << "Admittedly, it was quite annoying that time. And besides that, you yearn for user input. After all, if not for user input, this would simply be a rip-off of Homestuck! [PRESS ENTER TO CONTINUE]";
    cin >> enterToContinue;
    cout << "Suddenly, for reasons relating to plot convenience, a DIABLERIE TYPE monster breaks through your ceiling.";
	return 0;
}
int chapterTwo() {
	return 0;
}
int chapterThree() {
	return 0;
}
int chapterFour() {
	return 0;
}
int chapterFive() {
	return 0;
}
int chapterSix() {
	return 0;
}
int chapterSeven() {
	return 0;
}
int storyScondier() {
	cout << "Please select chapter.";
	cin >> chapter;
	if (chapter == 0) {
		cout << "CHAPTER 0: 43 6f 6e 66 75 73 69 6f 6e 20 43 61 66 65 74 65 72 69 61";
		chapterZero();
	}
	else if (chapter == 1) {
		cout << "CHAPTER 1: Delicious Dumble Dorzers";
		chapterOne();
	}
	else if (chapter == 2) {
		if (data.chapter > 1) {
			chapterTwo();
		}
		else {
			accessDenied();
		}
	}
	else if (chapter == 3) {
		if (data.chapter > 2) {
			chapterThree();
		}
		else {
			accessDenied();
		}
	}
	else if (chapter == 4) {
		if (data.chapter > 3) {
			chapterFour();
		}
		else {
			accessDenied();
		}
	}
	else if (chapter == 5) {
		if (data.chapter > 4) {
			chapterFive();
		}
		else {
			accessDenied();
		}
	}
	else if (chapter == 6) {
		if (data.chapter > 5) {
			chapterSix();
		}
		else {
			accessDenied();
		}
	}
	else if (chapter == 7) {
		if (data.chapter > 6) {
			chapterSeven();
		}
		else {
			accessDenied();
		}
	}
	return 0;
}

int main() {
	save.open("save.txt");
	headerFile.open("save.h");
	for(i=0 ; save.eof()!=true ; i++) {
		saveInfo += save.get();
	}
	save.close();
	headerFile >> saveInfo;
	cout << "WIZARD BROS! (press enter to continue)";
	cin >> enterToContinue;
	if (data.name == "temp") {
		cout << "Activate NAME scondier? (n is activation module)";
		cin >> scondierConf;
		if (scondierConf == "n") {
			nameScondier();
		}
		else {
			data.name = "Gorble Magituslek";
			cout << "NAME scondier not activated! Name is now Gorble Magituslek. How stupid.";
		}
	}
    if (data.firstGame == true) {
		cout << "Activate HELP scondier? (h is activation module, NOT H!)";
		cin >> scondierConf;
		if (scondierConf == "h") {
			helpScondier();
		}
		else if (scondierConf == "H") {
			cout << "You fool! You are not worthy of a scondier. You have been banned from the game.";
			deathCode = 00000000;
			deathScondier();
		}
		else {
			cout << "Help scondier not activated!";
		}
	}
	cout << "Activate COMMAND scondier or STORY scondier? (c or s)";
	cin >> scondierConf;
	if (scondierConf == "c") {
		commandScondier();
	}
	else if (scondierConf == "s") {
		storyScondier();
	}
	return 0;
}
