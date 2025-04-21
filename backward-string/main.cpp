//
// Name Tayson Wheeler
// Date 4/20/25
// Backward String Programming Project
// COSC 1030
//
#include <iostream>
#include <cstring>

using namespace std;

int main(){

    //Variables
    const char size = 100;
    char input[size];
    char newLine[size];
    int length;
    int count;

    //Input
    cout << "Input a string: " << endl;
    cin.getline(input, 100);

    //Getting length of string
    length = strlen(input);
    int repeats = length;

    //Reversing string
    for (count = 0; count < repeats + 1; count++){
        newLine[count] = input[length];
        length--;
    }

    //Relaying new string
    cout << "Your string backwards is: ";
    for (count = 0; count < repeats + 1 ; count++){
        cout << newLine[count];
    }

    return 0;
}