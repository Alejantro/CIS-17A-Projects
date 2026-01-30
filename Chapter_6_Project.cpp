// This program weighs the product and calculates the distance to give a charge to deliver.
#include <iostream>
#include <iomanip>

using namespace std;

double calculateCharge(double, double);

int main()
{
    double answer = -1;

    cout << "\nEnter the weight of the package in Kilos or 0 to exit: ";
    cin >> answer;

    while(answer != 0)
    {
        double miles;
        
        cout << "Enter the distance. the package will be shipped in miles: ";
        cin >> miles;
 
        double cost = calculateCharge(answer, miles);

        cout << fixed << showpoint << setprecision(2);
        cout << "\n" << "The shipping charge is: " << cost << "\n\n";

        cout << "Enter the weight of the package in Kilos or 0 to exit: ";
        cin >> answer;
    }

}

double calculateCharge(double kg, double mil)
{
    double rate = 0;
    double calmiles = mil / 500;

    if(kg <= 2)
    {
        rate = 3.10;
    }
        else if(kg > 2 && kg <= 6)
        {
            rate = 4.20;
        }
            else if(kg > 6 && kg <= 10)
            {
                rate = 5.30;
            }
                else
                    rate = 6.40;
                
    
    return (rate * calmiles);

}