#include <time.h> 
#include <windows.h>

#include <fstream>
#include <iostream>

//#include "FileWR.h"

using namespace std;

class Bin {
	
	public:
	string gameStart = " How would you like to start?\n\n New\n Load";
	
	string enterName1 = " Please Enter Your Characters First Name: ";
	string enterName2 = " Please Enter Your Characters Last Name: ";
	
	string welcome1 = " Welcome ";
	string welcome2 = ", to a solar system filled with opportunity.";
	string welcome3 = " You will be captaining your very own star ship around this strange and\n wonderful fronteer.";
	
	string newDay1 [6] = {" You start in a small space station. ",
						  " Stations offer services that you can access.\n",
						  " There are five main ways to play: Courier, people transport, Trader,\n Bounty Hunter and Miner.\n",
						  " To navigate the various menus in this game, type the number beside the desired\n option in square brackets (e.g. [1])\n",
						  " The help menu is always available to show you the commands when out in space.\n Type 'help' to display the help menu\n",
						  " It is up to you what happens next. Enjoy!"};
	
	string statTitle = " Station Services: ";
	string statServ [7] = {"  Commodities Market [0]",
						   "  Mission Board      [1]",
					       "  Ship Repair        [2]",
					       "  Ship Dealer        [3]",
					       "  Warehouse          [4]",
					       "  Captains Quarters  [5]\n",
					       "  Leave Station      [6]"};
	
	string commands [7] = {" A list of commands:",
						   "  Help",
						   "  Save",
						   "  Load",
						   "  Travel [Direction]",
						   "  Inventory",
						   "  Wait"}; 
	
	string invalid = " That was not a valid command";
	
	string warning1 = " You need to buy a ship first, or your not going to make it very far.";
	
	string shipTitles [5] = {"Name", "Storage Cap.", "Passenger Cap.", "Armor", "Price"};
	
	string shipNames [3] = {"Void Hopper", "Threat Stomper", "StarLiner Hai"};
	
	string shipStats [4][3] = {
		{"24", "4", "15", "108,540"},
		{"5", "2", "25", "115,435"},
		{"6", "25", "18", "125,786"}
	};
};

Bin bin1;

void pause ();
void choice ();

void pause () {
	
	cout << endl << " Hit [ENTER] To Continue: ";
	
	string i;
	
	getline(cin, i);
	//cin.get();
	cin.ignore();
	//cin.get();
	
	system ("cls");
	
}

void choice () {
	
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
		choice();
		
	}
	
}