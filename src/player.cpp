#include "player.h"
#include <iostream>
#include <string>

using std::string;

Player::Player(string name) {
    std::cout << " - New Player - " << std::endl;
    this->name = name;
}

string Player::GetName() {
    return name;
}

void Player::SetName() {
    string name;
    std::cout << "Enter player name: ";
    std::cin >> name;
    this->name = name;
}