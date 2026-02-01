#include "Dice.h" 
#include <ctime>   


Dice::Dice() 
{
    Size = 100;
    rolls.resize(Size, 0); 
}


void Dice::roll100() 
{
    srand(static_cast<unsigned int>(time(0))); 

    for (int i = 0; i < Size; i++) 
    {
        rolls[i] = (rand() % 6) + 1; 
    }
}


void Dice::calculateRolls() const 
{
    int counts[6] = {0}; 

    for (int roll : rolls) 
    {
        if (roll >= 1 && roll <= 6)
        {
            counts[roll - 1]++;
        }
    }

    std::cout << "Roll counts:\n";
    for (int i = 0; i < 6; i++) 
    {
        std::cout << "Number " << (i + 1) << ": " << counts[i] << std::endl;
    }
}


void Dice::printDice() const 
{
    for (int i = 0; i < Size; i++) 
    {
        std::cout << rolls[i] << " ";
        if ((i + 1) % 10 == 0)
        {
            std::cout << std::endl;
        }
    }
}