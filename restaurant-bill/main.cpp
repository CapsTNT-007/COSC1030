//
// Name Tayson Wheeler
// Date 2/1/2025
// Restaurant Bill Programming Project
// COSC 1030
//

#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    // Variable declarations
    float meal;
    float tax;
    float tip;
    float total;

    // Constants for the tax rate and tip percentage
    float taxRate = 0.0675;
    float tipRate = 0.2;

    // Get the amount of the purchase.
    cout << "Enter the amount of the purchase, then press enter: " << endl;
    cin >> meal;

    // Calculate the sales tax.
    tax = meal * taxRate;

    // Calculate the tip.
    tip = meal * tipRate;

    // Calculate the total of the sale.
    total = meal + tax + tip;
    
    // Print information about the sale.
    cout << fixed << setprecision(2);
    cout << "Meal cost: $" << meal << endl;
    cout << "Tax cost: $" << tax << endl;
    cout << "Tip cost: $" << tip << endl;
    cout << "Total: $" << total << endl;

    return 0;
}