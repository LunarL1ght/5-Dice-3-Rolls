//
//  main.cpp
//  5 Dice, 3 Rolls
//
//  Created by Josh Nelson on 9/28/23.
//

/*
    * Creating 5 dice and rolling them 3 times.
    * Printing output (dice values and totals).
    * Asking user if they would like to roll again.
*/

//initializing libraries
#include <iostream>
#include "Die.hpp"
#include <array>
using namespace std;

//initialize methods
void showDice(Die[]);
int getTotalScore(Die[]);

int main()
{
    //initialize variables
    Die myDice[5];
    string answer;
    //traverse through the rolls
    for (int i = 0; i < 3; i++)
    {
        //traverse through the die for each roll
        for (int j = 0; j < 5; j++)
        {
        myDice[j].roll();
        }
        
        //printing each die and its values, then the total
        cout << "Roll " << i+1 << ": " << endl;
        showDice(myDice);
        cout << " --> " << getTotalScore(myDice) << endl;
        cout << endl;
        
        //giving the user a chance to roll again
        if (i < 2)
        {
            cout << "Would you like to roll again? [" << 2 - i << " roll(s) remaining] (Type Y/N): ";
        }
        
        cin >> answer;
        
        cout << endl;
        if (answer != "Y")
        {
            i = 3;
        }
    }
    
    
    return 0;
}

void showDice(Die arr[])
{
        
        for (int i = 0; i < 5; i++)
        {
            cout << i+1 << " ";
        }
        cout << endl;
        cout << "-----" << endl;
        for (int i = 0; i < 5; i++)
        {
            cout << arr[i].getValue() << " ";
        }

    

}

int getTotalScore(Die arr[])
{
    int count = 0;
    for (int i = 0; i < 5; i++)
    {
        count += arr[i].getValue();
    }
    return count;
}
