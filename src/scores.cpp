#include "scores.h"
#include <string>
#include <map>
#include <iostream>
#include <fstream>
#include <sstream>
#include <functional>
#include <set>

Scores::Scores(){};
std::map<std::string, int> Scores::ReadScores()
{
    std::string line, name;
    int score;
    std::map<std::string, int> scores;
    const std::string scores_directory{"../data"};

    std::ifstream filestream(scores_directory + "/" + "scores.txt");
    if (filestream.is_open())
    {
        while (std::getline(filestream, line))
        {
            std::istringstream linestream(line);
            while (linestream >> name >> score)
            {
                scores.insert(std::make_pair(name, score));
            }
        }
        filestream.close();
        std::cout << "Scores file read complete." << std::endl;
        return scores;
    }
    else
    {
        std::ofstream outfile("scores.txt");
        std::cout << "Scores file did not exist. New file was created." << std::endl;
    }
}

void Scores::DisplayScores(std::map<std::string, int> map)
{
    typedef std::function<bool(std::pair<std::string, int>, std::pair<std::string, int>)> ScoreCompare;
    ScoreCompare compare = [](std::pair<std::string, int> pair1, std::pair<std::string, int> pair2)
    {
        return pair1.second > pair2.second;
    };
    std::set<std::pair<std::string, int>, ScoreCompare> sorted_map(map.begin(), map.end(), compare);
    int iterator = 1;
    for (std::pair<std::string, int> pair : sorted_map)
    {
        std::cout << "Player: " << pair.first << " - Score: " << pair.second << std::endl;
        iterator++;
        if (iterator > 10)
        {
            break;
        }
    }
}

void Scores::WriteScores(std::map<std::string, int> map)
{
    std::ofstream file;
    std::map<std::string, int>::iterator iterator;
    file.open("scores.txt", std::ios::in | std::ios::out | std::ios::app);
    if (!file.is_open())
    {
        std::cout << "Unable to open file." << std::endl;
    }
    else
    {
        for (iterator = map.begin(); iterator != map.end(); iterator++)
        {
            file << (*iterator).first << " " << (*iterator).second << "\n";
        }
    }
    file.close();
}