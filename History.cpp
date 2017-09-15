//
//  History.cpp
//  cs32 project 1
//
//  Created by Divij Ohri on 1/15/17.
//  Copyright © 2017 Divij Ohri. All rights reserved.
//

#include "History.h"

History::History(int nRows, int nCols)
: m_rows(nRows), m_cols(nCols)
{
    for (int r = 1; r <= m_rows; r++)
        for (int c = 1; c <= m_cols; c++)
            m_historyGrid[r-1][c-1] = 0;
}

bool History::record(int r, int c)
{
    if ( r < 1 || c < 1 || r > m_rows || c > m_cols)
        return false;
    
    m_historyGrid[r-1][c-1] += 1;
    return true;
}

void History::display() const
{
    char historyDisplayGrid[MAXROWS][MAXCOLS];
    
    for (int r = 1; r <= m_rows; r++)
        for (int c = 1; c <= m_cols; c++)
            historyDisplayGrid[r-1][c-1] = '.';
    
    for (int k = 0; k < m_rows; k++)
    {
        for (int j = 0; j < m_cols; j++)
        {
            int temp = m_historyGrid[k][j];
            char temp1;
            
            if (temp >= 26)
                temp1 = 'Z';
            else
                temp1 = 64 + temp;
            
            switch (temp)
            {
                case  0 :  historyDisplayGrid[k][j] = '.';   break;
                default :  historyDisplayGrid[k][j] = temp1; break;
            }
        }
    }
    
    // Draw the grid
    clearScreen();

    for (int r = 1; r <= m_rows; r++)
    {
        for (int c = 1; c <= m_cols; c++)
            cout << historyDisplayGrid[r-1][c-1];
        cout << endl;
    }
    cout << endl;
    
}
