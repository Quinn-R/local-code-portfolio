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
						  " There are four main ways to play: Courier, people transport, Trader, Bounty Hunter and Miner.\n",
						  " To navigate the various menus in this game, type the option that you want to\n display. If the desired option has a number beside it in square brackets,\n type that. (e.g. [1])\n",
						  " The help menu is always available to show you the commands.\n Type 'help' to display the help menu\n",
						  " It is up to you what happens next. Enjoy!"};
	
	string stat = " Station Services: ";
	string stat1 [7] = {"  Commodities Market [0]",
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
	
	string buyShip1 [4] = {" Available ships:    Name.           Storage Cap.    Passenger Cap.  Armor    Price", 
						   "                     Void Hopper     24              4               15       108,540",
						   "                     Threat Stomper  5               2               25       115,435",
						   "                     StarLiner Hai   6               25              18       125,786",};
};

