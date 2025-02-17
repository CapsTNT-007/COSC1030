//
// Name Tayson Wheeler
// Date 2/16/25
// University of Guiness Programming Project
// COSC 1030
//
#include <iostream>

using namespace std;

int main(){
    //Variables
    char inState;
    char needRoom;
    float total;

    //Gatting data
    cout << "If you are in state, type Y, if you are out of state, type N, then press enter. ";
    cin >> inState;
    cout << "If you need a room and board, type Y, if you don't need a room and board, type N, then press enter. ";
    cin >> needRoom;

    //If statments checking variables and adding to total (in state)
    if (inState == 'Y'){
        total += 3000;
        if (needRoom == 'Y')
            total += 2500;
        else if (needRoom != 'N'){
            //Fail safe to make sure they type a corrent response, and ending the program if they do not
            cout << "That answer does not fit the criteria, please type Y or N" << endl;
            return 0;
        }   
    }
    //If statments checking variables and adding to total (out of state)
    else if (inState == 'N'){
        total += 4500;
        if (needRoom == 'Y')
            total += 3500;
        else if (needRoom != 'N'){
            //Fail safe to make sure they type a corrent response, and ending the program if they do not
            cout << "That answer does not fit the criteria, please type Y or N" << endl;
            return 0;
        }
    }
    else {
        //Final fail safe to make sure they type a corrent response, and ending the program if they do not
        cout << "That answer does not fit the criteria, please type Y or N" << endl;
        return 0;
    }
    //Shows the total cost
    cout << "The total cost will be: $" << total << endl;
    return 0;

}

