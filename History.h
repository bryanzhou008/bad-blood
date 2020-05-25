//
//  History.hpp
//  Project1
//
//  Created by Bryan Zhou on 4/6/20.
//  Copyright © 2020 Bryan Zhou. All rights reserved.
//

#ifndef History_hpp
#define History_hpp

#include "globals.h"

class History
{
  public:
    History(int nRows, int nCols);
    
    // Mutators
    bool record(int r, int c);
    
    // Accessors
    void display() const;
    
  private:
    int m_rows;
    int m_cols;
    int m_grid[MAXROWS][MAXCOLS];
    
    
};

#endif /* History_hpp */
