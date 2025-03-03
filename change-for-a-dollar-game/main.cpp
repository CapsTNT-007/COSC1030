//
// Name Tayson Wheeler
// Date 3/2/25
// Change for a Dollar Game Programming Project
// COSC 1030
//
#include <iostream>

using namespace std;

int main(){
    //Variables
    int pennies = 0;
    int nickels = 0;
    int dimes = 0;
    int quarters = 0;

    //Getting information
    cout << "Enter the amout of pennies, nickes, dimes, and quarters required to make a dollar. Put a space between all of them, then press enter. ";
    cin >> pennies >> nickels >> dimes >> quarters;

    //Calculating total
    nickels *= 5;
    dimes *= 10;
    quarters *= 25;

    //Printing results
    if (pennies + nickels + dimes + quarters == 100)
        cout << "Congradulations! Those all add up to a dollar!" << endl;
    else
        cout << "Oops, thats not quite right. Try again." << endl;

    return 0;
}