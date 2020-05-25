//
//  Game.hpp
//  Project1
//
//  Created by Bryan Zhou on 4/6/20.
//  Copyright © 2020 Bryan Zhou. All rights reserved.
//

#ifndef Game_hpp
#define Game_hpp

#include <stdio.h>
#include "globals.h"
#include "Arena.h"
#include <iostream>
#include <string>
#include <random>
#include <utility>
#include <cstdlib>
#include <cctype>
using namespace std;
class Game
{
  public:
      // Constructor/destructor
    Game(int rows, int cols, int nVampires);
    ~Game();

      // Mutators
    void play();

  private:
    Arena* m_arena;

      // Helper functions
    string takePlayerTurn();
};
#endif /* Game_hpp */

bool decodeDirection(char ch, int& dir);
bool recommendMove(const Arena& a, int r, int c, int& bestDir);
int computeDanger(const Arena& a, int r, int c);
