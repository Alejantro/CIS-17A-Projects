#include <iostream>
#include <ctime>

using namespace std;

void rollDie(int [], int);
int numOnes(int [], int);
int numTwos(int [], int);
int numThrees(int [], int);
int numFours(int [], int);
int numFives(int [], int);
int numSixes(int [], int);


int main()
{
    srand(time(0));
    const int SIZE = 100;
    int theRoll[SIZE];

    cout << "\nGoing to roll the die 100 times and then count how many times it lands on each number.\n\n";
    rollDie(theRoll, SIZE);

    int one = numOnes(theRoll, SIZE);
    int two = numTwos(theRoll, SIZE);
    int three = numThrees(theRoll, SIZE);
    int four = numFours(theRoll, SIZE);
    int five = numFives(theRoll, SIZE);
    int six = numSixes(theRoll, SIZE);

    for(int i = 0; i < SIZE; i++)
    {
        cout << theRoll[i] << " ";
    }

    cout << "\n\n";
    cout << "This is the amount of how many ones were rolled: " << one << endl;
    cout << "This is the amount of how many twos were rolled: " << two << endl;
    cout << "This is the amount of how many threes were rolled: " << three << endl;
    cout << "This is the amount of how many fours were rolled: " << four << endl;
    cout << "This is the amount of how many fives were rolled: " << five << endl;
    cout << "This is the amount of how many sixes were rolled: " << six << endl;


    return 0;
}


void rollDie(int rolledDie[], int amount)
{

    for(int i = 0; i < amount; i++)
    {
        const int rolling = 1 + rand() % 6;
        rolledDie[i] = rolling;
    }

}

int numOnes(int rolledDie[], int amount)
{
    int count = 0;

    for(int i = 0; i < amount; i++)
    {
        if(rolledDie[i] == 1)
        count++;
    }
    return count;
}

int numTwos(int rolledDie[], int amount)
{
    int count = 0;

    for(int i = 0; i < amount; i++)
    {
        if(rolledDie[i] == 2)
        count++;
    }
    return count;
}

int numThrees(int rolledDie[], int amount)
{
    int count = 0;

    for(int i = 0; i < amount; i++)
    {
        if(rolledDie[i] == 3)
        count++;
    }
    return count;
}

int numFours(int rolledDie[], int amount)
{
    int count = 0;

    for(int i = 0; i < amount; i++)
    {
        if(rolledDie[i] == 4)
        count++;
    }
    return count;
}

int numFives(int rolledDie[], int amount)
{
    int count = 0;

    for(int i = 0; i < amount; i++)
    {
        if(rolledDie[i] == 5)
        count++;
    }
    return count;
}

int numSixes(int rolledDie[], int amount)
{
    int count = 0;

    for(int i = 0; i < amount; i++)
    {
        if(rolledDie[i] == 6)
        count++;
    }
    return count;
}

