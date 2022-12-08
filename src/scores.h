#include <map>
#include <string>

class Scores
{
public:
    Scores();
    std::map<std::string, int> ReadScores();
    void DisplayScores(std::map<std::string, int> map);
};