//
// Name Tayson Wheeler
// Date 2/9/24
// Stadium Seating Programming Project
// COSC 1030
#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    double seatsA;
    double seatsB;
    double seatsC;

    cout << "How many people bought tickets in section A, B, and C. Put a space between all of them, then click enter. ";
    cin >> seatsA >> seatsB >> seatsC;
    seatsA *= 15;
    seatsB *= 12;
    seatsC *= 9;
    cout << fixed << setprecision(2);
    cout << "Income for section A: $" << seatsA << endl;
    cout << "Income for section B: $" << seatsB << endl;
    cout << "Income for section C: $" << seatsC << endl;


    return 0;
}