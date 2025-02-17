//
// Name Tayson Wheeler
// Date 2/16/25
// Time Calculator Programming Project
// COSC 1030
//
#include <iostream>

using namespace std;

int main(){
    //Variables
    double seconds;

    //Getting number of seconds
    cout << "Enter any number of seconds, then press enter. ";
    cin >> seconds;

    //Calculations and output
    if (seconds >= 60 && seconds <= 3600) 
        cout << seconds << " seconds = " << seconds/60 << " minute(s)" << endl;
    else if (seconds <= 86400)
        cout << seconds << " seconds = " << seconds/3600 << " hour(s)" << endl;
    else if (seconds >= 86400)
        cout << seconds << " seconds = " << seconds/86400 << " days(s)" << endl;

    return 0;
}
