//
//  Rat.h
//  cs32 project 1
//
//  Created by Divij Ohri on 1/15/17.
//  Copyright © 2017 Divij Ohri. All rights reserved.
//

#ifndef Rat_h
#define Rat_h

class Arena;  // This is needed to let the compiler know that Arena is a
// type name, since it's mentioned in the Rat declaration.

class Rat
{
public:
    // Constructor
    Rat(Arena* ap, int r, int c);
    
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

#endif /* Rat_h */
