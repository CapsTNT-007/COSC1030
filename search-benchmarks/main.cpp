//
// Name Tayson Wheeler
// Date 4/6/2025
// Search Benchmarks Programming Project
// COSC 1030
//
#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    //Variables
    const int SIZE = 20;
    int integers[SIZE] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    int value = 15;

    int index = 0;
    int position =-1;
    bool found = false;

    //Setting up the linear search
    while (index < SIZE && !found)
    {
        if (integers[index] == value)
        {
            found = true;
            cout << "It took " << index << " many comparisons." << endl;
        }
        index++;
    }

    //Resetting and adding new variables
    int first = 0;
    int last = SIZE - 1;
    int middle =(first + last) / 2;
    position = -1;
    found = false;
    int count = 1;

    //Setting up binary search
    while (!found && first <=last)
    {
        middle = (first + last) / 2;
        if (integers[middle] == value)
        {
            found = true;
            cout << "It took " << count << " many comparisons." << endl;
        }
        else if (integers[middle] > value)
            last = middle - 1;
        else
            first = middle +1;
        count++;
    }


    return 0;
}