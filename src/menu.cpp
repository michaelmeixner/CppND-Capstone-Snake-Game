#include "menu.h"
#include <sstream>
#include <iostream>

using namespace std;
bool Menu::quit_selected = false;

bool Menu::Initialize()
{
    int input;

    cout << " --- Snake Game --- " << endl;
    cout << "   " << endl;
    cout << " Enter number to select: " << endl;
    cout << " 1. Start new game" << endl;
    cout << " 2. Top 10 scores" << endl;
    cout << " 3. Quit game" << endl;
    cout << "   " << endl;
    cout << "Your selection:  ";

    while (!(cin >> input))
    {
        cin.clear();
        while (cin.get() != '\n')
        {
            continue;
        }
        cout << "Please enter a number: ";
    }
    if ((input < 1) || (input > 3))
    {
        cout << "Number " << input << " is not an available option. Please enter 1, 2, or 3.";
        return false;
    }
    switch (input)
    {
    case 1:
        cout << "Start new game selected." << endl;
        return true;

    case 2:
        // get scores here
        break;

    case 3:
        cout << "Quitting game.";
        quit_selected = true;
        return false;

    default:
        cout << "Menu value out of bounds." return false;
    }
}