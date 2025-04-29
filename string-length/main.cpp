//
// Name Tayson Wheeler
// Date 4/28/25
// String Length Programming Project
// COSC 1030
//
#include <iostream>
#include <cstring>

using namespace std;
int stringLength(char*);

int main(){

    //Variables
    const char size = 100;
    char input[size];
    int length;
    int count;

    //Input
    cout << "Input a string: " << endl;
    cin.getline(input, 100);

    //Getting length of string
    length = strlen(input);
    cout << "There is " << length << " character(s) in that string." << endl;

    return 0;
}//Function
int stringLength(char* string){
    int length;
    length = strlen(string);
    return length;
}