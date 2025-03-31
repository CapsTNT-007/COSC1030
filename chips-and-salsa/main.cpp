//
// Name Tayson Wheeler
// Date 3/30/2025
// Chips and Salsa Programming Project
// COSC 1030
//
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    //Variables
    const int salsas = 5;
    string salsaTypes[salsas] = {"sweet", "sour", "spice", "hot", "zesty"};
    int salsaSlales[salsas];
    int totalSales = 0;
    int lowestSalse = 0;
    int highestSales = 0;

    //Getting infromation
    for (int count = 0; count < salsas; count++){
        cout << "How many cans are you selling of " << salsaTypes[count] << "?" << endl;
        cin >> salsaSlales[count];
    }

    //Calculating for total, lowest, and highest
    for (int count = 0; count < salsas; count++){
        totalSales += salsaSlales[count];
    }

    for (int count = 0; count < salsas; count++){
        if (highestSales < salsaSlales[count]){
            highestSales = salsaSlales[count];
        }
    }

    lowestSalse = salsaSlales[0];
    for (int count = 0; count < salsas; count++){
        if (lowestSalse > salsaSlales[count]){
            lowestSalse = salsaSlales[count];
        }
    }

    //Presenting infromation
    for (int count = 0; count < salsas; count++){
        cout << "There was " << salsaSlales[count] << " jars sold of the " << salsaTypes[count] << " type of salsa." << endl;
    }
    cout << "The total was " << totalSales << endl;
    cout << "The highest selling was " << highestSales << endl;
    cout << "The lowest selling was " << lowestSalse << endl;

    return 0;
}