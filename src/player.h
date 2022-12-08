#include <string>

class Player
{
public:
    Player() {};
    Player(std::string);

    std::string GetName();
    void SetName();

private:
    std::string name;
};