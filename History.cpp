//
//  History.cpp
//  Project1
//
//  Created by Bryan Zhou on 4/6/20.
//  Copyright © 2020 Bryan Zhou. All rights reserved.
//

#include "History.h"
#include "globals.h"
#include <iostream>
#include <cstdlib>
using namespace std;

History::History(int nRows, int nCols)
{
    m_rows = nRows;
    m_cols = nCols;
    for (int r = 0; r < m_rows; r++)
        for (int c = 0; c < m_cols; c++)
            m_grid[r][c] = 0;
}

bool History::record(int r,int c)
{
    if(r > m_rows || r < 1 || c > m_cols || c < 1)
    {
        return false;
    }
    else
    {
        m_grid[r-1][c-1]+=1;
        return true;
    }
}


void History::display() const
{
    clearScreen();

    for (int r = 0; r < m_rows; r++)
    {
        for (int c = 0; c < m_cols; c++)
        {
            int i = m_grid[r][c];
            char a = '.';
            if (i == 0)
            {
                cout << a;
            }
            else if(i >= 26)
            {
                a = 'Z';
                cout << a;
            }
            else
            {
                a ='A' + i - 1;
                cout << a;
            }
        }
        cout << endl;
    }
    cout << endl;
}
