//
// Name Tayson Wheeler
// Date 4/13/2025
// Monthly Sales Programming Project
// COSC 1030
//
#include <iostream>

using namespace std;
int yearly(int*, int);
int average(int*, int);

int main(){

    //Variables
    int *sales = nullptr;
    int size;
    int count;

    //Getting input
    cout << "How many values do you wish to imput?" << endl;
    cin >> size;

    //Creating Dynamic Memory Allocation Array
    sales = new int[size]; 

    for (count = 0; count < size; count++){
        cout << "Enter value #" << count + 1 << ": ";
        cin >> sales[count];
    }

    //Calling two functions
    yearly(sales,size);
    average(sales,size);

    //Releasing dynamic memory allocation
    delete[] sales; 

    return 0;
}

//Functions
int yearly(int *sales, int SIZE) {
    int count;
    int total = 0;

    for (count = 0; count < SIZE; count++){
        total += sales[count];
    }
    cout << "The yearly sum is: " << total << endl;

    return 0;
}

int average(int *sales, int SIZE) {
    int count;
    double total = 0;

    for (count = 0; count < SIZE; count++){
        total += sales[count];
    }
    cout << "The average is: " << (double)total/(double)SIZE << endl;

    return 0;
}