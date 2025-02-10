//
// Name Tayson Wheeler
// Date 2/9/25
// Woody Furniture Company Programming Project
// COSC 1030
//
#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    double americanColonial;
    double modern;
    double frenchClassical;

    cout << "How many chairs of each type were sold? Put a space between all of them, then click enter. ";
    cin >> americanColonial >> modern >> frenchClassical;
    americanColonial *= 85;
    modern *= 57.5;
    frenchClassical *= 127.75;
    cout << fixed << setprecision(2);
    cout << "Total cost of all American Colonial chairs sold: $" << americanColonial << endl;
    cout << "Total cost of all Modern chairs sold: $" << modern << endl;
    cout << "Total cost of all French Classical chairs sold: $" << frenchClassical << endl;
    cout << "Total cost of all chairs: $" << americanColonial + modern + frenchClassical << endl;


    return 0;
}