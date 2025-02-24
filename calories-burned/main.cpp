//
// Name Tayson Weheeler
// Date 2/23/2025
// Calories Burned Programming Project
// COSC 1030
//
#include <iostream>

using namespace std;

int main(){
    //Variables
    int minutes = 5;

    //Initializing loop
    while (minutes <= 30) {

        //Calculating and outputing answer
        cout << "After " << minutes << " minutes, you will have burned " << minutes * 3.6 << " calories." << ' '<<endl;

        //setting up for next loop
        minutes += 5;
    }
    return 0;
}