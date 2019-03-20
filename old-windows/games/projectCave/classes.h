#ifndef CLASSES_H_INCLUDED
#define CLASSES_H_INCLUDED

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <windows.h>

using namespace std;

class MainChar // Character class
{
    public:
    bool hasTier1Sword;
    int healthPotions;
    
    void inventory () // Inventory printout
    {
        system ("cls");
        cout << endl << 
        " Inventory" << endl << endl;
        
        if (hasTier1Sword == 1) 
        {
            cout <<
            "  Rusty Sword" << endl;
        }
        cout <<
        "  Potions: " << healthPotions << endl;
        cout << endl <<
        " [Enter] to continue";
        cin.ignore();
        getchar();
        system ("cls");
        return;
    }
};

MainChar char1;

class CaveEntrance
{
    public:
    bool cEntranceDiscovered;
    bool cEntranceLoc;
    bool tier1Sword = 1;
    bool healthPotion = 1;
    
    void searchCEntrance()
    {
        if (cEntranceDiscovered == 1 && tier1Sword == 1)
        {
            system ("cls");
            
            tier1Sword = 0;
            char1.hasTier1Sword = 1;
            
            cout << endl <<
            " You stalk around the cave entrance carefully and discover an abandoned camp." << endl << endl << 
            " You have discovered: Rusty Sword, Health Potion (1)";
            
            cout << endl << endl <<
            " [Enter] to continue";
            cin.ignore();
            getchar();
            system ("cls");
            return;
        }
        else if (cEntranceDiscovered == 1 && tier1Sword == 0)
        {
            system ("cls");
            
            tier1Sword = 0;
            char1.hasTier1Sword = 1;
            
            cout << endl <<
            " There is nothing left to find";
            
            cout << endl << endl <<
            " [Enter] to continue";
            cin.ignore();
            getchar();
            system("cls");
            return;
        }
        else if (cEntranceDiscovered == 0 && tier1Sword == 1)
        {
            system ("cls");
            
            cout << endl <<
            " You must first map the area.";
            
            cout << endl << endl <<
            " [Enter] to continue";
            cin.ignore();
            getchar();
            system("cls");
            return;
        }
        
    }
    
    void mapCEntrance()
    {
        if (cEntranceDiscovered == 0)
        {
            system ("cls");
            
            cEntranceDiscovered = 1;
            
            cout << endl <<
            " You have discovered: Cave Entrance";
            
            cout << endl << endl <<
            " [Enter] to continue";
            cin.ignore();
            getchar();
            system("cls");
            return;
        }
        else if (cEntranceDiscovered == 1)
        {
            system ("cls");
            
            cout << endl <<
            " You have already discovered: Cave Entrance";
            
            cout << endl << endl <<
            " [Enter] to continue";
            cin.ignore();
            getchar();
            system("cls");
            return;
        }
    }
    
};

CaveEntrance cEntrance;

#endif // CLASSES_H_INCLUDED
