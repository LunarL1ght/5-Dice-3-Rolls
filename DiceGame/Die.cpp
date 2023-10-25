//
//  Die.cpp
//  5 Dice, 3 Rolls
//
//  Created by Josh Nelson on 9/28/23.
//
//Constructor and methods for the Die Class

#include <time.h>
#include <cstdlib>
#include "Die.hpp"

//initializing die
Die::Die(int num)
{
    value = 0;
    sides = num;
    srand((unsigned)time(NULL));
}
//initializing die
Die::Die()
{
    value = 0;
    sides = 6;
    srand((unsigned)time(NULL));
}

void Die::roll()
{
    value = 0;
    for (int i = 0; i < 3; i++)
    {
        value = (1 + (rand() % sides));
    }
    
}

int Die::getValue()
{
    return value;
}

