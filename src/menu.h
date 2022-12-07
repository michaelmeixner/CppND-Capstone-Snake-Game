#include <iostream>

class Menu
{
public:
    Menu()
    {
        std::cout << "Menu class constructor." << std::endl;
    };
    static bool quit_selected;
    bool Initialize();
};