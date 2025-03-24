//
// Name Tayson Wheeler
// Date 3/13/25
// Grades Programming Project
// COSC 1030
//
#include <iostream>
#include <iomanip>

using namespace std;
int findingAverage(double, double);

int main(){
    //Variables
    int grades;
    double numberOfGrades;
    double sumOfGrades;
    int average;
    int count = 0;

    //Getting information
    cout << "How many grades do you need to imput?" << endl;
    cin >> numberOfGrades;

    while (count != numberOfGrades){
        cout << "What is the grade?" << endl;
        cin >> grades;
        sumOfGrades += grades;
        count++;
    }

    //Running function
    average = findingAverage (sumOfGrades, numberOfGrades);

    //Determining grade
    if (average >= 90)
        cout << "The average grade is an A" << endl;
    else if (average >= 80)
        cout << "The average grade is an B" << endl;
    else if (average >= 70)
        cout << "The average grade is an c" << endl;
    else if (average >= 60)
        cout << "The average grade is an D" << endl;
    else
        cout << "The average grade is an F" << endl;
    return 0;
}

//Defining function
int findingAverage(double total, double amout){
    return total/amout;
}