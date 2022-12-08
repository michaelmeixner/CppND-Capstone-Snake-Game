# CPPND: Capstone Snake Game

This repository includes my capstone project for the Udacity C++ Nanodegree Program. This project satisfies all criteria for the “README” and “Compiling and Testing” sections in the project rubric, and meets at least 5 additional criteria from the rest of the rubric. This project was based on the snake game skeleton provided by Udacity.

<img src="snake_game.gif"/>

## My Changes/Additions:
* Added ability to end game via pressing the escape key (file: controller.cpp, line(s): 46-48).
* Added a thread lock (file: renderer.cpp, line(s): 95).
* Added a start menu with three options for the player to select: start new game, see 10 highest scores, and quit game.

## Dependencies for Running Locally
* cmake >= 3.7
  * All OSes: [click here for installation instructions](https://cmake.org/install/)
* make >= 4.1 (Linux, Mac), 3.81 (Windows)
  * Linux: make is installed by default on most Linux distros
  * Mac: [install Xcode command line tools to get make](https://developer.apple.com/xcode/features/)
  * Windows: [Click here for installation instructions](http://gnuwin32.sourceforge.net/packages/make.htm)
* SDL2 >= 2.0
  * All installation instructions can be found [here](https://wiki.libsdl.org/Installation)
  >Note that for Linux, an `apt` or `apt-get` installation is preferred to building from source. 
* gcc/g++ >= 5.4
  * Linux: gcc / g++ is installed by default on most Linux distros
  * Mac: same deal as make - [install Xcode command line tools](https://developer.apple.com/xcode/features/)
  * Windows: recommend using [MinGW](http://www.mingw.org/)

## Basic Build Instructions

1. Clone this repo.
2. Make a build directory in the top level directory: `mkdir build && cd build`
3. Compile: `cmake .. && make`
4. Run it: `./SnakeGame`.
