//
// Name Tayson Wheeler
// Date 4/20/2025
// Pig Latin Programming Project
// COSC 1030
//
#include <iostream>
#include <cstring>

using namespace std;

int main(){

    //Variables
    const char size = 100;
    char input[size];
    bool isWhite  = false;
    char temp;
    int count = 0;
    int length;

    //Input
    cout << "Input a string: " << endl;
    cin.getline(input, 100);

    //Getting the length of input
    length = strlen(input);

    //Setting up a loop that will go through every character until the last one
    while (count < length){

        //Sets temp to the first letter of the word
        temp = (input[count]);

        //Looks through a word and moves the characters one spot back until it reaches a space (the end of the word)
        while (isWhite == false && count < length){
            if (isspace(input[count])){
                isWhite = true;
            } else {
                input[count] = input[count + 1];
                count++;
            }
        }

        //Changes the final character in the word to the first and resets the loop
        input[count - 1] = temp;
        count++;
        isWhite = false;

    }

    //Displays the end result and adds "ay" to the end of every word
    cout << "Your string in pig latin is: ";
    for (count = 0; count < length ; count++){
        cout << input[count];
        if (isspace(input[count+1]) || count + 1 == length){
            cout << "ay";
        }
    }
    cout << endl;

    return 0;
}