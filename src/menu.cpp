#include "menu.h"
#include <sstream>
#include <iostream>

bool Menu::quit_selected = false;

bool Menu::Initialize()
{
    int input;

    std::cout << " --- Snake Game --- " << std::endl;
    std::cout << "   " << std::endl;
    std::cout << " Enter number to select: " << std::endl;
    std::cout << " 1. Start new game" << std::endl;
    std::cout << " 2. Top 10 scores" << std::endl;
    std::cout << " 3. Quit game" << std::endl;
    std::cout << "   " << std::endl;
    std::cout << "Your selection:  ";

    while (!(std::cin >> input))
    {
        std::cin.clear();
        while (std::cin.get() != '\n')
        {
            continue;
        }
        std::cout << "Please enter a number: ";
    }
    if ((input < 1) || (input > 3))
    {
        std::cout << "Number " << input << " is not an available option. Please enter 1, 2, or 3.";
        return false;
    }
    switch (input)
    {
    case 1:
        return true;

    case 2:
        // get scores here
        break;

    case 3:
        std::cout << "Quitting game.";
        quit_selected = true;
        return false;

    default:
        std::cout << "Menu value out of bounds." return false;
    }
}