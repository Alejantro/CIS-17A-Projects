#include "Dice.h"

using namespace std;

int main() 
{
    Dice myDice;           

    myDice.printDice();    
    cout << "\nRolling the dice 100 times...\n\n";

    myDice.roll100();      
    myDice.printDice();    
    cout << endl;

    myDice.calculateRolls(); 

    return 0;
}