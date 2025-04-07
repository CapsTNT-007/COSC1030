//
// Name Tayson Wheeler
// Date 4/6/2025
// Integer Array
// COSC 1030
//
#include <iostream>
#include <iomanip>

using namespace std;

//Functions
void bubbleSort(int [], int);
void swap(int &, int &);
int binarySearch(const int [], int, int);
double mean(int [], int);

int main(){
    //Variables
    int amountOfInt;
    int value = 0;
    int posistion = 0;
    double meanFinal = 0;

    //Getting size of array
    cout << "How many values would you like to imput? " << endl;
    cin >> amountOfInt;

    //Making array
    int ints[amountOfInt];

    //Getting infromation in the array
    for (int count = 0; count < amountOfInt; count++){
        cout << "Enter integer: " << endl;
        cin >> ints[count];
    }

    bubbleSort(ints, amountOfInt);

    //Serching for a specific number
    cout << "What value would you like to search for? " << endl;
    cin >> value;

    posistion = binarySearch(ints, amountOfInt, value);
    cout << "The posistion of the number you are serching for is " << posistion << endl;
    
    //Getting mean
    meanFinal = mean(ints, amountOfInt);
    cout << "The mean of the array is " << meanFinal << endl;

    return 0;
}

//Sorting the array
void bubbleSort(int array[], int size)
{
    int maxElement;
    int index;

    for (maxElement = size -1; maxElement > 0; maxElement--)
    {
        for (index = 0; index < maxElement; index++)
        {

            if (array[index] > array [index + 1])
            {
                swap(array[index], array[index + 1]);
            }
        }
    }
}

//Function for swaping two variables values
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

//Search function
int binarySearch(const int array[], int numElems, int value)
{
    int first = 0,
        last = numElems - 1,
        middle,
        position = -1;
    bool found = false;

    while (!found && first <= last)
    {
        middle = (first + last) / 2;
        if (array[middle] == value)
        {
            found = true;
            position = middle;
        }
        else if (array[middle] > value)
            last = middle -1;
        else
            first = middle +1;
    }
    return position;
}

//Mean function
double mean(int array[], int size)
{
    double total = 0;
    double tally = 0;
    double final = 0;
    for (int count = 0; count < size; count++)
    {
        total += array[count];
        tally++;
    }
    final = (double)total/tally;
    return final;
}