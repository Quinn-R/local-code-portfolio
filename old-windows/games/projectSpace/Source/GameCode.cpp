#include <stdlib.h>
#include <windows.h>
#include <iomanip>
#include <vector>

#include <fstream>
#include <iostream>

#include "Common.h"
#include "FileWR.h"

using namespace std;

extern Bin bin1;

extern void pause ();
extern void choice ();
extern string checkLines (string);


void gameLaunch();
void intro ();
string load ();

string firstName;
string lastName;

//OpenSpace space1;
//AstroidBelt astr1;

class Ship {
	
	public:
	bool hasShip = false;
	string shipName;
	int Storage;
	int Passenger;
	int armour;
	
};

class Stat {
	
	Bin bin2;
	Ship ship2;
	
	public:
	
	void service() {
		
		system("cls");
		
		string serve;
	
		cout << bin2.statTitle << endl << endl;
		
		cout << bin2.statServ [0] << endl << bin2.statServ [1] << endl << bin2.statServ [2] << endl << bin2.statServ [3] << endl << bin2.statServ [4] << endl << bin2.statServ [5] << endl << bin2.statServ [6] << endl << endl;
		
		cout << endl << " : ";
	
		cin >> serve;
	
		if (serve == "0") {
		
			cout << endl << " In Progress" << endl << endl;
		
		}else if (serve == "1") {
		
			cout << endl << " In Progress" << endl << endl;
		
		}else if (serve == "2") {
			
			
			cout << endl << " In Progress" << endl << endl;
		
		}else if (serve == "3") {
			
			//shipDealer();
			cout << endl << " In Progress" << endl << endl;
		
		}else if (serve == "4") {
		
			cout << endl << " In Progress" << endl << endl;
		
		}else if (serve == "5") {
		
			cout << endl << " In Progress" << endl << endl;
		
		}else if (serve == "6") {
			
			if (ship2.hasShip == false) {
				cout << bin1.warning1 << endl;
				Sleep(4000);
				system("cls");
				service();
			} 
			
			cout << endl << " In Progress" << endl << endl;
		
		}else{
		
			cout << endl << bin1.invalid << endl;
			Sleep(4000);
			system("cls");
			service();
		
		}
	}
	
	void shipDealer() {
		
		cout << bin1.buyShip1[0] << endl << bin1.buyShip1[1] << endl << bin1.buyShip1[2] << endl << bin1.buyShip1[3] << endl << endl;
		cout << " : ";
		//cin >> 
	}
	
};

Stat stat1;

int main () {
	
	gameLaunch();
	
	return 0;
}

void gameLaunch () {
	
	string input1;
	
	cout << bin1.gameStart << endl << endl;
	cout << " : ";
	cin >> input1;
	cout << endl;
	
	if (input1 == "new" || input1 == "New" || input1 == "N" || input1 == "n") {
		
		system ("cls");
		intro();
		
	}else if (input1 == "load" || input1 == "Load" || input1 == "L" || input1 == "l") {
		
		//cout << "In progress" << endl;
		
		
		void load ();
		system ("pause");
		
	}else{
		
		cout << endl << bin1.invalid << endl;
		Sleep(4000);
		system("cls");
		gameLaunch();
		
	}
	
}

string load () {
	
	
	string fileName;
	
	cout << "Please input your save game name: ";
	cin >> fileName;
	string checkLines (fileName);
	
	//system ("pause");
}

void intro () {
	
	string yn;
	
	cout << bin1.enterName1;
	cin >> firstName;
	cout << endl;
	
	cout << bin1.enterName2;
	cin >> lastName;
	cout << endl << endl;
	
	cout << " Your name is " << firstName << " " << lastName << ". Are you sure?\n\n Yes\n No\n\n : ";
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
	cout << bin1.welcome3 << endl << endl;
	
	cout << endl << endl;
	
	cout << bin1.newDay1[0] << endl << bin1.newDay1[1] << endl << bin1.newDay1[2] << endl << bin1.newDay1[3] << endl << bin1.newDay1[4] << endl << bin1.newDay1[5] << endl << endl;
	
	pause();
	
	stat1.service();
}

