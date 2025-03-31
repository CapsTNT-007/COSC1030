//
// Name Tayson Wheeler
// Date 3/30/2025
// Temperatures
// COSC 1030
//
#include <iostream>
#include <iomanip>

using namespace std;

//Setting up arrays and functions
typedef int weather[50];
double findingAverage(weather temps, int);
int findingHighest(weather temps, int);
int findingLowest(weather temps, int);

int main() {

    // Variables
    weather temps;
    const int salsas = 5;
    int days;
    double average = 0;
    int highest = 0;
    int lowest = 0;

    //Getting infromation
    cout << "How many days would you like to put temperatures in for? " << endl;
    cin >> days;
    while (days > 50) {
        cout << "Please input 50 days or less. " << endl;
        cin >> days;
    }

    for (int count = 0; count < days; count++) {
        cout << "What was the temperature on day " << count + 1 << "?" << endl;
        cin >> temps[count];
    }

    //Running fuctions
    average = findingAverage(temps, days);
    highest = findingHighest(temps, days);
    lowest = findingLowest(temps, days);

    //Outputing infromation
    cout << fixed << setprecision(2);
    cout << "The average temperature is " << average << endl;
    cout << "The highest temperature is " << highest << endl;
    cout << "The lowest temperature is " << lowest << endl;

    return 0;
}

//Functions
double findingAverage(weather temps, int days) {
    double sum = 0;
    for (int count = 0; count < days; count++) {
        sum = sum + temps[count]; 
    }
    return sum / days;
}

int findingHighest(weather temps, int days) {
    int highest = temps[0];
    for (int count = 1; count < days; count++) {
        if (highest < temps[count]) {
            highest = temps[count];
        }
    }
    return highest;
}

int findingLowest(weather temps, int days) {
    int lowest = temps[0]; 
    for (int count = 1; count < days; count++) { 
        if (lowest > temps[count]) {
            lowest = temps[count];
        }
    }
    return lowest;
}