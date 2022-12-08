#include <iostream>
#include <map>
#include "controller.h"
#include "game.h"
#include "renderer.h"
#include "menu.h"
#include "scores.h"
#include "player.h"

int main()
{
  constexpr std::size_t kFramesPerSecond{60};
  constexpr std::size_t kMsPerFrame{1000 / kFramesPerSecond};
  constexpr std::size_t kScreenWidth{640};
  constexpr std::size_t kScreenHeight{640};
  constexpr std::size_t kGridWidth{32};
  constexpr std::size_t kGridHeight{32};

  bool start_game = false;
  bool quit_selected = false;

  while (true)
  {
    while (start_game == false)
    {
      Menu menu;
      if (menu.quit_selected == true)
      {
        return 0;
      }
      start_game = menu.Initialize();
    }
    start_game = false;

    std::map<std::string, int> score;
    Scores *scores = new Scores();
    Player *player = new Player();
    player->SetName();

    Renderer renderer(kScreenWidth, kScreenHeight, kGridWidth, kGridHeight);
    Controller controller;
    Game game(kGridWidth, kGridHeight);
    game.Run(controller, renderer, kMsPerFrame);
    std::cout << "Game has terminated successfully!\n";
    std::cout << "Score: " << game.GetScore() << "\n";
    std::cout << "Size: " << game.GetSize() << "\n";

    score.insert(std::make_pair(player->GetName(), game.GetScore()));
    scores->WriteScores(score);
  }
  return 0;
}