//
// Name Tayson Wheeler
// Date 2/23/2025
// Beverages Survey Programming Project
// COSC 1030
//
#include <iostream>

using namespace std;

int main(){
    //Variables
    int count = 0;
    int coffee = 0;
    int tea = 0;
    int coke = 0;
    int orangeJuice = 0;

    //Initializing loop
    while (count != -1) {
        cout << "If your favorite drint is coffee, please type 1" << endl;
        cout << "If your favorite drint is tea, please type 2" << endl;
        cout << "If your favorite drint is coke, please type 3" << endl;
        cout << "If your favorite drint is oragne juice, please type 4" << endl;
        cout << "If there is no one else in line, pleyse type -1" << endl;
        cout << "Then press Enter" << endl;

        //Getting value
        cin >> count;

        //Assesing the count variable and adding it to the total number of likes
        if (count == 1)
            coffee++;
        else if (count ==2)
            tea++;
        else if (count ==3)
            coke++;
        else if (count ==4)
            orangeJuice++;
        else if (count != -1)
            cout << "That's not one of the specified values. Please try again and input a number between 1 and 4, or -1 if there is no one else." << endl;
    }
    //Outputing the answer
    cout << "There was " << coffee + tea + coke + orangeJuice << " people surveyed, with " << coffee << " people who liked coffee, " << tea << " people who liked tea, " << coke << " people who like coke, and " << orangeJuice << " people who liked orange Juice." << endl; 
    return 0;
}

