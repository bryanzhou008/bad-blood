//
//  Vampire.hpp
//  Project1
//
//  Created by Bryan Zhou on 4/6/20.
//  Copyright © 2020 Bryan Zhou. All rights reserved.
//

#ifndef Vampire_h
#define Vampire_h

class Arena;

class Vampire
{
  public:
      // Constructor
    Vampire(Arena* ap, int r, int c);

      // Accessors
    int  row() const;
    int  col() const;
    bool isDead() const;

      // Mutators
    void move();

  private:
    Arena* m_arena;
    int    m_row;
    int    m_col;
    int    m_health;
    int    m_idleTurnsRemaining;
};
#endif /* Vampire_h */
