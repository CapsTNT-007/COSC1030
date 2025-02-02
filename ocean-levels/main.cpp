//
// Name Tayson Wheeler
// Date 2/1/25
// Ocean Levels Programming Project
// COSC 1030
//
#include <iostream>

using namespace std;

int main(){
    #//Variables
    float years;
    float oceanRisingPerYear = 1.5;

    //calculations for 5 years
    years = 5;
    cout << "After " << years << " years, the ocean will have rised " << years * oceanRisingPerYear << " millimeters." << endl;
    
    //calculations for 7 years
    years = 7;
    cout << "After " << years << " years, the ocean will have rised " << years * oceanRisingPerYear << " millimeters." << endl;

    //calculations for 10 years
    years = 10;
    cout << "After " << years << " years, the ocean will have rised " << years * oceanRisingPerYear << " millimeters." << endl;

    return 0;
}


