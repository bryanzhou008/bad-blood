//
//  Player.hpp
//  Project1
//
//  Created by Bryan Zhou on 4/6/20.
//  Copyright © 2020 Bryan Zhou. All rights reserved.
//

#ifndef Player_hpp
#define Player_hpp


#include <string>
class Arena;

using namespace std;
class Player
{
  public:
      // Constructor
    Player(Arena* ap, int r, int c);

      // Accessors
    int  row() const;
    int  col() const;
    bool isDead() const;

      // Mutators
    string dropPoisonVial();
    string move(int dir);
    void   setDead();

  private:
    Arena* m_arena;
    int    m_row;
    int    m_col;
    bool   m_dead;
};
#endif /* Player_hpp */
