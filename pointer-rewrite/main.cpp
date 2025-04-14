//
// Name Tayson Wheeler
// Date 4/13/2025
// Pointer Rewrite Programming Project
// COSC 1030
//
#include <iostream>

using namespace std;
int doSomething(int*, int*);

int main(){

    //Variables
    int numb1 = 5;
    int numb2 = 10;

    //Getting info
    cout << "number 1 = " << numb1 << ", number 2 = " << numb2 << endl;

    int result = doSomething(&numb1,&numb2);

    cout << "number 1 = " << numb1 << ", number 2 = " << numb2 << endl;

    return 0;
}

//Functions
int doSomething(int *x, int *y) {
    int temp = *x;
    *x = *y * 10;
    *y = temp * 10;
    return *x + *y;
}