#include <iostream>
#include <string>
using namespace std;

void enterToContinue;
string scondierConf;
string name;
int deathCode;
bool firstCommand = true;
bool commandUsed = false;

int nameScondier() {
	cout << "You have just activated the NAME scondier. The name choice is changeable.";
	cin >> name;
	if (name == "changeable") {
		cout << "Level 20 mage bro gives you a thumbs up. Finally, someone who understands his godly sense of humor."
	}
	else {
		cout << "Name registered as " << name;
	}
	return 0;
}
int helpScondier() {
	cout << "Congrats! You have successfully activated HELP scondier.";
	cout << "";
	return 0;
}
int deathScondier() {
	cout << "CONGRATULATIONS! DEATH scondier has been activated. You are dead.";
	cout << "REASON FOR DEATH: " << deathCode << "\nPlease consult CODE scondier for translation of code.";
	exit(EXIT_SUCCESS);
	return 0;
}
int codeScondier() {
	cout << "You have just activated the CODE scondier. Please convert your binary code into a number.\nCODES:\n0: Made a stupid mistake\n1: Died of a monster with a level of 0-3\n2: Died of a monster with a level of 4-7\n3: Died of a monster with a level of 8-11\n4: Died of a monster with a level of 12-15\n5: Died of a monster with a level of 16-19\n6: Died of a monster with a level of 20\n7: Died of a BASEmAGE (Level 0-3)\n8: Died of an eXmAGE (Level 4-7)\n9: Died of an @eXmAGE (Level 8-11)\n10: Died of a sKONKmAGE (Level 12-15)\n11: Died of an @sKONKmAGE (Level 16-19)\n12: Died of the SUPREME MAGE (Level 20)\n13: Activated the DEATH scondier [PRESS ENTER TO CONTINUE]";
	cin >> enterToContinue;
	return 0;
}
int commandScondier() {
	if (firstCommand == true) {
		cout << "You have just activated the COMMAND scondier. It is quite stupid of you do have done so instead of starting the story. Oh well, as they say, sHjkldsfhja SDuviOWkjsadnf. Please consult HELP scondier (h) to learn about game and scondier commands.";
	}
	else if (commandUsed == true) {
		cout <<
	}
	else {
		cout << "You have just activated the COMMAND scondier. Please consult HELP scondier (h) to learn about game and scondier commands.";
	}
	commandUsed = true;
	firstCommand = true;
	return 0;
}

int main() {
	cout << "WIZARD BROS! (press enter to continue)";
	cin >> enterToContinue;
	cout << "Activate NAME scondier? (n is activation module)";
	cin >> scondierConf;
	if (scondierConf == "n") {
		nameScondier();
	}
	else {
		name = "Gorble Magituslek";
		cout << "NAME scondier not activated! Name is now Gorble Magituslek. How stupid.";
	}
	cout << "Activate HELP scondier? (h is activation module)";
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
	cout << "Activate COMMAND scondier or STORY scondier? (c or s)";
	cin >> scondierConf;
	if (scondierConf == "c") {
		commandScondier();
	}
	else if (scondierConf == "s") {
		commandScondier();
	}
	return 0;
}
