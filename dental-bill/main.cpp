//
// Name Tayson Wheeler
// Date 4/28/25
// Dental Bill Programming Project
// COSC 1030
//
#include <iostream>
#include <iomanip>

using namespace std;
double totalFunction(int, bool);
double totalFunction(int);

int main(){

    //Variables
    bool member;
    string answer;
    double total;
    int amount;

    //Setting up a loop that will ask if they are have the membership
    while (member != true && member != false){
        cout << "Are you a member of our dental plan? " << endl;
        cin >> answer;
        if (answer == "yes" || answer == "Yes"){
            member = true;
        } else if (answer == "no" || answer == "No"){
            member = false;
        } else {
            cout << "Please input a valid answer. " << endl;
        }
    }

    //Finds the amount of fees
    cout << "How many fees are there? " << endl;
    cin >> amount;

    //Calls function based on if they are members or not
    if (member == true){
        total = totalFunction(amount, member);
    } else{
        total = totalFunction(amount);
    }

    //Returns total
    cout << fixed << setprecision(2);
    cout << "The total is $" << total << endl;

    return 0;
}

//Functions
double totalFunction(int amount, bool member){
    int count;
    double holder;
    double total;
    for (count = 0; count < amount; count++){
        cout << "What is the price of the expense? " << endl;
        cin >> holder;
        total += holder;
    }
    return total;
}

double totalFunction(int amount){
    int count;
    double holder;
    double total;
    double medicine;
    for (count = 0; count < amount; count++){
        cout << "What is the price of the expense? " << endl;
        cin >> holder;
        total += holder;
    }

    cout <<  "What is the price of the medicine? " << endl;
    cin >> medicine;
    total += medicine;
    return total;
}