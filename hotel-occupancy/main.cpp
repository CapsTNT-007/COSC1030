//
// Name Tayson Wheeler
// Date 3/2/25
// Hotel Occupancy Programming Project
// COSC 1030
//
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    //Variables
    int floors = 0;
    int rooms = 0;
    int roomsTotal = 0;
    int fullRooms = 0;
    int fullRoomsTotal = 0;
    int count = 1;
    double percentage = 0;

    //Getting information
    cout << "How many floors are on your hotel? " << endl;
    cin >> floors;

    //Checking for floor above 1
    while (floors < 1){
        cout << "Place input a number above 1. " << endl;
        cin >> floors;
    }
    
    //Checking rooms and ocupation and also skipping 13th floor
    while (count != floors + 1){
        if (count == 13)
            count += 1;
        else{
            cout << "Floor: "<< count << " How many rooms are on this floor? " << endl;
            cin >> rooms;
            while (rooms < 10){
                cout << "Please input a number above 10. " << endl;
                cin >> rooms;
            }
            roomsTotal += rooms;
            cout << "How many rooms are full? " << endl;
            cin >> fullRooms;
            fullRoomsTotal += fullRooms;
            count += 1;
        }
    }
    //Getting the percentage and making it go to two decimal points
    cout << fixed << setprecision(2);
    percentage = fullRoomsTotal/(double)roomsTotal;
    percentage *= 100;
    cout << "The number of rooms is " << roomsTotal << ", the number of occupied rooms is " << fullRoomsTotal << ", and the percentage of rooms that are full is " << percentage << "%" << endl;

    return 0;
}