// This program determines how many jars of salsa were sold
// and which had the highest and lowest sold.
#include <iostream>
#include <string>

using namespace std;

int main()
{
    
    const int NUM_JAR = 5;
    string salsa[] = { "Sweet", "Mild" , "Medium", "Hot", "Zest" };
    int jarSold[NUM_JAR];

    int totalJars = 0;

        string highJar = "";
        string lowJar = "";
    

    cout << "***************************************************************\n";

    for(int i = 0; i < NUM_JAR; i++)
    {
        cout << "Enter the amount of jars sold for " << salsa[i] << " Salsa: ";
        cin >> jarSold[i];
    }

    cout << "\n***************************************************************\n";
        
        
        int highestSold = 0;
        int lowestSold = jarSold[0];


    for(int i = 0; i < NUM_JAR; i++)
    {

        cout << "The Total jars sold for " << salsa[i] << " salsa is : " << jarSold[i] << endl;
        totalJars += jarSold[i];


        if(jarSold[i] > highestSold)
        {
            highestSold = jarSold[i];
            highJar = salsa[i];
        }
        if(jarSold[i] < lowestSold)
        {
            lowestSold = jarSold[i];
            lowJar = salsa[i];
        }
       
    }

    cout << "\n---------------------------------------------------------------\n";

    cout << "Highest selling salsa: " << highJar << endl;
    cout << "Lowest selling salsa: " << lowJar << endl;
    cout << "Total jars sold: " << totalJars << endl;

    cout << "\n***************************************************************\n";

    
    
    return 0;
}