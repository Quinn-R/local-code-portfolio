#ifndef COMMON_H_INCLUDED
#define COMMON_H_INCLUDED

#include "classes.h"



using namespace std;

// Function declaration
int randDamage();
string randEnemy();
void commands(string userCommands);

void commands(string userCommands) // Used to decide what to do with user input.
{
    if (userCommands == "help" || userCommands == "Help") // User input = help
    {
        system ("cls");
        cout << endl <<
        " Commands:" << endl <<
        "  mapArea - Record your location on the map." << endl << 
        "  search - Search the area for loot." << endl << 
        "  map - Look at your map."<< endl << 
        "  save - Save the game.";
        Sleep (5000);
        system ("cls");
        return;
        //getchar();
    }
    else if (userCommands == "search" || userCommands == "Search") // User input = search
    {
        if (cEntrance.cEntranceLoc == 1)
        {
            cEntrance
            return;
        }
        else if (cEntrance.cEntranceLoc == 1 && cEntrance.cEntranceDiscovered == 0 && cEntrance.tier1Sword == 1)
        {
            system ("cls");
            
            cEntrance.tier1Sword = 0;
            char1.hasTier1Sword = 1;
            
            cout << endl <<
            " You have discovered: Rusty Sword";
            
            Sleep (5000);
            system ("cls");
            return;
        }
        
    }
    else if (userCommands == "mapArea" || userCommands == "MapArea" || userCommands == "maparea" || userCommands == "Maparea" ) // User input = mapArea
    {
        if (cEntrance.cEntranceLoc == 1 && cEntrance.cEntranceDiscovered == 0)
        {
            system ("cls");
            
            cEntrance.cEntranceDiscovered = 1;
            
            cout << endl <<
            " You have discovered: Cave Entrance";
            
            Sleep (5000);
            system ("cls");
            return;
        }
        
    }
    /*else if (userCommands == "map" || userCommands == "Map") // User input = help
    {
        system ("cls");
        //cFloor.cFloorDiscovered = 1;
        cout << endl <<
        " You have discovered: Cave Floor";
        Sleep (5000);
        system ("cls");
        return;
    }*/
    else // User input = incorrect
    {
        return;
    }
}

int randDamage()
{
    int max = 101;
}

#endif // COMMON_H_INCLUDED
