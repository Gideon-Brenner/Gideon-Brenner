// MachineProblem3 May 19 three.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//First I include the elements I need to run the program. Again, I found <string> very useful!

#include <iostream>
#include <string>
using namespace std;

double CalcProfit(int NumberUnits, int NumberOccupied, double VacantIncrease, double Maintenance, double Rent)
{

    //This calculates the current rent
    double RentNow = Rent + (NumberUnits-NumberOccupied)*VacantIncrease;
    //This calculates the profit
    double Profit = RentNow*NumberOccupied - Maintenance*NumberOccupied;

    return Profit;
}

int main()
{
    int NumberUnits = 0;

    double Rent, Maintenance, VacantIncrease;

    double MaxProfit = 0;

    int MaxProfitUnits = 0;

    cout << "The total number of units: ";
    cin >> NumberUnits;
    cout << "The rent to occupy all the units: ";
    cin >> Rent;
    cout << "The increase in rent that results in a vacant unit: ";
    cin >> VacantIncrease;
    cout << "Amount to maintain a rented unit: ";
    cin >> Maintenance;


    //This calculates the profit for a unit
    for (int i = NumberUnits; i > 0;i--)
    {
        double Profit = CalcProfit(NumberUnits, i, Rent, VacantIncrease, Maintenance);

        //Updates Profit, only if it is larger than our largest previous profit. Also updates how many units are rented for the profit.
        if (Profit > MaxProfit)
        {
            MaxProfit = Profit;
            MaxProfitUnits = i;
        }
    }
    cout << "To maximize profit, " << MaxProfitUnits << " units should be rented\n";
    cout << "The maximum profit is $" << MaxProfit;
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
