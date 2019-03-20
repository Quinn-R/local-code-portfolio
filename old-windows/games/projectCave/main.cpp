#include "mechFile.h"

void commands(string userCommands, string counter);

main ()
{
    // This will be used to decide where the game loop begins
    string counter = "1";
    
    // This is the game loop
    while (counter != "0")
    {
        if (counter == "1") // This is the opening message
        {
            cout << endl << 
            " The Cave Under The Well" << endl << 
            " ***********************" << endl << endl << 
            " Welcome to my first game. The objective of this game is to" << endl << 
            " escape a cave that you find yourself laying in after falling" << endl << 
            " down a well. Your family is waiting for you on the surface, " << endl << 
            " concerned about your absence." << endl << endl <<
            " This game is a console based game, so requires text input" << endl << 
            " from the user. To learn the commands, type 'help' at any point" << endl << 
            " in the game." << endl << endl <<
            " [Enter] to continue";
            counter = "2";
            getchar();
            system("cls");
        }
        else if (counter == "2") // This is the menu
        {
            cout << endl <<
            "  Play [0]" << endl << 
            "  Load [1]" << endl <<
            "  Exit [2]"<< endl << endl << 
            " : ";
            string userInput1;
            cin >> userInput1;
            
            if (userInput1 == "0") // Play
            {
                counter = "3";
            }
            else if (userInput1 == "1") // Load
            {
                system("cls");
                cout << "This is incomplete...";
                
                cout << endl << endl <<
                " [Enter] to continue";
                cin.ignore();
                getchar();
                system("cls");
                counter = "2";
                
            }
            else if (userInput1 == "2") // Exit
            {
                counter = "0";
            }
            else // Wrong input
            {
                system("cls");
                cout << endl <<
                " That is not a command.";
                cout << endl << endl <<
                " [Enter] to continue";
                cin.ignore();
                getchar();
                system("cls");
                counter = "2";
            }
            system("cls");
        }
        else if (counter == "3") // This is the intro.
        {
            cout << endl <<
            " You find yourself lying on the cave floor." << endl << endl <<
            " What do you do? : ";
            
            cEntrance.cEntranceLoc = 1;
            
            string userCommands;
            cin >> userCommands;
            
            commands(userCommands, counter);
            
            if (cEntrance.cEntranceDiscovered == 1)
            {
                counter = "4a";
            }
        }
        else if (counter == "4a") // This is the intro.
        {
            cout << endl <<
            " Location: Cave " << endl << endl <<
            " What do you do? : ";
            
            cEntrance.cEntranceLoc = 1;
            
            string userCommands;
            cin >> userCommands;
            
            commands(userCommands, counter);
        }
        else // Exit the loop
        {
            counter = "0";
        }
    }
    getchar();
}

void commands(string userCommands, string counter) // Used to decide what to do with user input.
{
    if (userCommands == "help" || userCommands == "Help") // User input = help
    {
        system ("cls");
        cout << endl <<
        " Commands:" << endl <<
        "  mapArea - Record your location on the map." << endl << 
        "  search - Search the area for loot." << endl << 
        "  map - Look at your map."<< endl << 
        "  save - Save the game." << endl << 
        "  inventory - View your backpack." << endl <<
        "  exit - Quit the game.";
        
        //Sleep (6000);
        cout << endl << endl <<
        " [Enter] to continue";
        cin.ignore();
        getchar();
        system("cls");
        return;
        //getchar();
    }
    else if (userCommands == "search" || userCommands == "Search") // User input = search
    {
        if (cEntrance.cEntranceLoc == 1)
        {
            cEntrance.searchCEntrance();
            return;
        }
        
    }
    else if (userCommands == "mapArea" || userCommands == "MapArea" || userCommands == "maparea" || userCommands == "Maparea" ) // User input = mapArea
    {
        if (cEntrance.cEntranceLoc == 1)
        {
            cEntrance.mapCEntrance();
            return;
        }
    }
    /*else if (userCommands == "map" || userCommands == "Map") // User input = map
    {
        system ("cls");
        //cFloor.cFloorDiscovered = 1;
        cout << endl <<
        " You have discovered: Cave Floor";
        
        cout << endl << endl <<
        " [Enter] to continue";
        getchar();
        system("cls");
        return;
    }*/
    else if (userCommands == "inventory" || userCommands == "Inventory") // User input = inventory
    {
        char1.inventory();
        return;
    }
    else if (userCommands == "Exit" || userCommands == "exit") // User input = exit
    {
        counter = "0";
    }
    else // User input = incorrect
    {
        system("cls");
        cout << endl <<
        " That is not a command.";
        
        cout << endl << endl <<
        " [Enter] to continue";
        cin.ignore();
        getchar();
        system("cls");
        return;
    }
}
