//
//  Game.h
//  cs32 project 1
//
//  Created by Divij Ohri on 1/15/17.
//  Copyright © 2017 Divij Ohri. All rights reserved.
//

#ifndef Game_h
#define Game_h

#include "globals.h"

class Arena;

class Game
{
public:
    // Constructor/destructor
    Game(int rows, int cols, int nRats);
    ~Game();
    
    // Mutators
    void play();
    
private:
    Arena* m_arena;
    
    // Helper functions
    string takePlayerTurn();
    bool recommendMove(const Arena& a, int r, int c, int& bestDir);
    int computeDanger(const Arena& a, int r, int c);

};


#endif /* Game_h */
