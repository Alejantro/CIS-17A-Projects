#ifndef DICE_H
#define DICE_H

#include <vector>
#include <iostream>

class Dice 
{
private:
    std::vector<int> rolls; 

public:
    int Size; 

    Dice();

    void roll100();
    void calculateRolls() const;
    void printDice() const;
};

#endif