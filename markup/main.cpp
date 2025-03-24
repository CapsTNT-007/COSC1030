//
// Name Tayson Wheeler
// Date 3/23/25
// Markup Programming Project
// COSC 1030
//
#include <iostream>
#include <iomanip>

using namespace std;
void calculateRetail(double, double);

int main(){
    //Variables
    double wholesale;
    double markup;

    //Getting information
    cout << "What is the wholesale price of the item?" << endl;
    cin >> wholesale;
    cout << "What is the markup percent of the item?" << endl;
    cin >> markup;

    //Running function
    calculateRetail(wholesale, markup);

    return 0;
}

//Defining function
void calculateRetail(double wholesale, double markup){
    cout << "The retail price is $" << wholesale * (1 + markup / 100) << endl;
}