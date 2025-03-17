/*
CSC 134
M4LAB1 - Grid with Loops
nepalp
3/17/2025
nested loops
*/
#include <iostream>
using namespace std;

int main () {
    string pattern = "👾🤖👽";
    //string pattern = "👉👌";
    // string alien "👽";
    //const int WIDTH = 8;
    //const int HEIGHT = 10;

    /*
    // while loop version 
    int count = 0;
    while (count < WIDTH) {
        cout << pattern;
        count += 1;
    }
    cout << endl;
    
    
    // print a row 
    for (int i = 0; i < WIDTH; i++) {
        cout << pattern;
    }
    cout << endl;

    // print a column
    for (int i = 0; i < HEIGHT; i++) {
        cout << pattern << endl;
    }
    */
   // print a square (combines the previous ones)
    int width, height;

    cout << "What is the width? ";
    cin >> width;
    cout << "\nWhat is the height? ";
    cin >> height;


    // print a square (combines the previous ones)
    cout << "\nSquare of " << width << " by " << height << endl;
    cout << endl;
    if (width > 0 && height > 0) {
        for (int i = 0; i < height; i++) {
            for (int i = 0; i < width; i++) {
                cout << pattern;
            }
            cout << endl;
        }
    }
    

    return 0;
}