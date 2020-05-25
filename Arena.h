//
//  Arena.hpp
//  Project1
//
//  Created by Bryan Zhou on 4/6/20.
//  Copyright © 2020 Bryan Zhou. All rights reserved.
//

#ifndef Arena_hpp
#define Arena_hpp

#include "globals.h"
#include "History.h"
#include <string>
using namespace std;

class Player;
class Vampire;




class Arena
{
public:
    // Constructor/destructor
    Arena(int nRows, int nCols);
    ~Arena();
    
    // Accessors
    int     rows() const;
    int     cols() const;
    Player* player() const;
    int     vampireCount() const;
    int     getCellStatus(int r, int c) const;
    int     numberOfVampiresAt(int r, int c) const;
    void    display(string msg) const;
    History& history();
    
    // Mutators
    void setCellStatus(int r, int c, int status);
    bool addVampire(int r, int c);
    bool addPlayer(int r, int c);
    void moveVampires();
    
    
private:
    int      m_grid[MAXROWS][MAXCOLS];
    int      m_rows;
    int      m_cols;
    Player*  m_player;
    Vampire* m_vampires[MAXVAMPIRES];
    int      m_nVampires;
    int      m_turns;
    History  m_History;
    
    // Helper functions
    void checkPos(int r, int c, string functionName) const;
    bool isPosInBounds(int r, int c) const;
};

#endif /* Arena_hpp */
