/*
CSC 134
M3HW1 - Gold
Pranay Nepal
03/30/2025
*/
#include <iostream>
#include <limits>
using namespace std;

int main() {
    // Question 1: 
    for (int i = 1; i <= 12; i++) {
       cout << "5 times " << i << " is " << 5*i << "." << endl;
    }
    
    // Question 2:
    int input1;
    cout << "Enter a number from 1 to 12? ";
    cin >> input1;

    if (input1 > 12) {
        cout << "You need to input a number between 1 and 12." << endl;
    } else {
        for (int i = 1; i <= 12; i++) {
            cout << input1 << " times " << i << " is " << input1*i << "." << endl;
        }
    }
    
    // Question 3:
    int input;
    bool condition = true;

    while (condition) {
        cout << "Enter a number from 1 to 12? ";
        cin >> input;

        if (cin.fail()) {
            cout << "Your input needs to be a number between 1 and 12." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else if (input < 0 || input > 12) {
            cout << "Your input needs to be a number between 1 and 12." << endl;
        } else {
            for (int i = 1; i <= 12; i++) {
                cout << input << " times " << i << " is " << input*i << "." << endl;
                condition = false;
            }
        }
    }
    return 0;
}