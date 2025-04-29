//
// Name Tayson Wheeler
// Date 4/28/25
// Sorting Benchmarks Programming Project
// COSC 1030
//
#include <iostream>

using namespace std;
void bubbleSort(int[], int);
void selectionSort(int[], int);

int main(){

    //Variables
    const int size = 20;
    int values[size] = {13, 7, 1, 18, 10, 15, 4, 2, 11, 17, 8, 20, 5, 14, 3, 12, 6, 19, 9, 16};

    //Calling functions
    bubbleSort(values, size);
    selectionSort(values, size);

}

//Functions
void bubbleSort(int array[], int size)
{
    int maxElement;
    int index;
    int tally;

    for (maxElement = size -1; maxElement > 0; maxElement--)
    {
        for (index = 0; index < maxElement; index++)
        {

            if (array[index] > array [index + 1])
            {
                swap(array[index], array[index + 1]);
                tally++;
            }
        }
    }
    cout << "The bubble sort made " << tally << " swaps." << endl;
}

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void selectionSort(int array[], int size){
    int smallestNumber, minIndex;
    int tally;

    for (int count = 0; count < (size - 1); count++){
        minIndex = count;
        smallestNumber = array[count];
        for (int index = count + 1; index < size; index++){
            if (array[index] < smallestNumber){
                smallestNumber = array[index];
                minIndex = index;
            }
        }
        swap(array[minIndex], array[count]);
        tally++;
    }
    cout << "The selection sort made " << tally << " swaps." << endl;
}