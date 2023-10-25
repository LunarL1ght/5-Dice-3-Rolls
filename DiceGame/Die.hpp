//
//  Die.hpp
//  5 Dice, 3 Rolls
//
//  Created by Josh Nelson on 9/28/23.
//Header file for the Die Class

#ifndef Die_hpp
#define Die_hpp

#include <stdio.h>

class Die
{
public:
    Die(int);
    Die();
    void roll();
    int getValue();
private:
    int sides;
    int value;
};

#endif /* Die_hpp */
