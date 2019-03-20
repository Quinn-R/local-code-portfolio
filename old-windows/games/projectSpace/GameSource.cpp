#include <fstream>
#include <iostream>


#include <stdlib.h>
#include <time.h> 
#include <windows.h>
#include <iomanip>


using namespace std;



void pause ();
void gameLaunch();
void intro ();
void choice ();



class Bin {
	
	public:
	string gameStart = " How would you like to start?\n\n Load\n New";
	string enterName1 = " Please Enter Your Characters First Name: ";
	string enterName2 = " Please Enter Your Characters Last Name: ";
	string welcome1 = " Welcome ";
	string welcome2 = ", to a solar system filled with opportunity.";
	string welcome3 = " You will be captaining your very own ship around this strange and wonderful \n fronteer.";
	
	string newDay1 = " You start in a small space station. ";
	string newDay2 = " Stations offer services that you can access.";
	string newDay3 = " There are four main ways to play: Courier, Trader, Bounty Hunter and Miner.";
	string newDay4 = " To navigate the various menus in this game, type the option that you want to\n display. If the desired option has a number beside it in square brackets,\n type that. (e.g. [1])";
	string newDay5 = " The help menu is always available to show you the commands.\n Type 'help' to display the help menu";
	string newDay6 = " It is up to you what happens next. Enjoy!";
	
	string stat1 = " Station Services: ";
	string stat2 = "  Commodities Market [0]\n  Ship Repair        [1]\n  Ship Dealer        [2]\n  Warehouse          [3]\n  Captains Quarters  [4]\n\n  Leave Station      [5]";
	
	string commands = " A list of commands:\n Help\n Save\n Load\n Travel [Direction]\n Inventory\n Wait"; 
	
	string invalid = " That was not a valid command";
	
};

class Stat {
	
	Bin bin2;
	
	public:
	
	
	
	void service() {
		
		system("cls");
		
		string serve;
	
		cout << bin2.stat1 << endl << endl;
		cout << bin2.stat2 << endl << endl;
		cout << " : ";
	
		cin >> serve;
	
		if (serve == "0") {
		
			cout << endl << " In Progress" << endl << endl;
		
		}else if (serve == "1") {
		
			cout << endl << " In Progress" << endl << endl;
		
		}else if (serve == "2") {
		
			cout << endl << " In Progress" << endl << endl;
		
		}else if (serve == "3") {
		
			cout << endl << " In Progress" << endl << endl;
		
		}else if (serve == "4") {
		
			cout << endl << " In Progress" << endl << endl;
		
		}else if (serve == "5") {
		
			cout << endl << " In Progress" << endl << endl;
		
		}else{
		
			cout << endl << bin2.invalid << endl;
			Sleep(4000);
			system("cls");
			service();
		
		}
	}
	
};

class Ship {
	bool hasShip = false;
};

Stat stat1;
Ship s1;
//OpenSpace space1;
//AstroidBelt astr1;
Bin bin1;

string firstName;
string lastName;


int main () {
	
	gameLaunch();
	
}

void gameLaunch () {
	
	string input1;
	
	cout << bin1.gameStart << endl;
	cout << " : ";
	cin >> input1;
	cout << endl;
	
	if (input1 == "new" || input1 == "New" || input1 == "N" || input1 == "n") {
		
		system ("cls");
		intro();
		
		
	}else if (input1 == "load" || input1 == "Load") {
		
		cout << "In progress" << endl;
		
	}else{
		
		cout << endl << bin1.invalid << endl;
		Sleep(4000);
		system("cls");
		gameLaunch();
		
	}
	
}

void intro () {
	
	string yn;
	
	cout << bin1.enterName1;
	cin >> firstName;
	cout << endl;
	
	cout << bin1.enterName2;
	cin >> lastName;
	cout << endl << endl;
	
	cout << " Your name is " << firstName << " " << lastName << ". Are you sure?\n\n Yes\n No\n : ";
	cin >> yn;
	
	if (yn == "Yes" || yn == "yes" || yn == "y" || yn == "Y") {
		
		
		
	}else if (yn == "No" || yn == "no" || yn == "n" || yn == "N") {
		
		system("cls");
		intro();
		
	} else {
		
		cout << endl << bin1.invalid << endl;
		Sleep(4000);
		system("cls");
		intro();
		
	}

	
	system("cls");
	
	cout << bin1.welcome1 << firstName;
	cout << bin1.welcome2 << endl << endl;
	cout << bin1.welcome3 << endl << endl << endl;
	
	cout << bin1.newDay1 << endl;
	cout << bin1.newDay2 << endl;
	cout << bin1.newDay3 << endl;
	cout << endl << bin1.newDay4 << endl;
	cout << endl << bin1.newDay5 << endl << endl;
	cout << endl << bin1.newDay6 << endl << endl;
	
	pause();
	
	stat1.service();
}


void pause () {
	
	
	cout << endl << " Hit [ENTER] To Continue: ";
	cin.ignore();
	cin.get();
	
	system ("cls");
}

void choice () {
	
	//A list of commands:\n Help\n Save\n Travel [Direction]\n Inventory\n Wait
	
	string choose;
	
	cout << " : ";
	cin >> choose;
	
	if (choose == "Help" || choose == "help") {
		
		cout << endl << bin1.commands << endl << endl;
		
	}else if (choose == "Save" || choose == "save") {
		
		cout << endl << "In Progress" << endl << endl;
		
	}else if (choose == "Load" || choose == "load") {
		
		cout << endl << "In Progress" << endl << endl;
		
	}else if (choose == "Travel" || choose == "travel") {
		
		cout << endl << "In Progress" << endl << endl;
		
	}else if (choose == "Inventory" || choose == "inventory") {
		
		cout << endl << "In Progress" << endl << endl;
		
	}else if (choose == "Wait" || choose == "wait") {
		
		cout << endl << "In Progress" << endl << endl;
		
	} else {
		
		cout << endl << bin1.invalid << endl;
		Sleep(4000);
		system("cls");
		choice();
		
	}
}













