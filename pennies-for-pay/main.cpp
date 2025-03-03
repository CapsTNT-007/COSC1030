//
// Name Tayson Wheeler
// Date 3/2/25
// Pennies for Pay Programming Project
// COSC 1030
//
#include <iostream>

using namespace std;

int main(){
    //Variables
    int days = 0;
    double total = 0;
    int increasePerDay = 1;
    int count = 0;

    //Getting information
    cout << "You get payed 1 penny every day, but every day it doubles. How many days would you like to see the total? Type the day and press enter. " << endl;
    cin >> days;

    //Checking for 1+ days and calculating total
    if (days > 1){
        while (count < days){
            total = total + increasePerDay;
            increasePerDay += increasePerDay;
            count += 1;
        }
        cout << "The total you would make after " << days << " days is $" << total/100 << endl;
    }
    else
        cout << "Please input a number that is at lease 1." << endl;

}