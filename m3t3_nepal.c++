// CSC 134
// M3T3
// nepalp
// 2/17/2025
// Start with dice rolls
// What dice are you using today?

#include <iostream>
// for random
#include <cmath>    
#include <ctime>
using namespace std;

int main() {
    const int SIDES = 6; // yours will differ!
    //int seed = 19;
    int seed = time(0);
    // seed the random number generator
    srand(seed);
    // rand() is a large number, so we take the remainder which is %
    int roll1, roll2, total, point;
    // roll a few times
    roll1 = ( (rand() % SIDES)+1 );
    roll2 = ( (rand() % SIDES)+1 );
    total = roll1 + roll2;

    cout << "You rolled " << roll1 << " + " << roll2 << " = " << total << endl;
    // && is and || is or
    // 7, 11 is a win
    if (total == 7 || total == 11) {
        cout << "You win!" << endl;
    } // 2, 3, 12 is a loss
    else if (total == 2 || total == 3 || total == 12) {
        cout << "You lose." << endl;
    } // anything else is a "point" (we can make this more effiecient later once we go over loops and functions)
    else {
        point = total;
        cout << "Your point is " << point << endl;
        roll1 = ( (rand() % SIDES)+1 );
        roll2 = ( (rand() % SIDES)+1 );
        total = roll1 + roll2;
        cout << "You rolled " << roll1 << " + " << roll2 << " = " << total << endl;
        if (total == point) {
            cout << "You win!" << endl;
        }
        else if (total == 7) {
            cout << "You lose!" << endl;
        }
        while (total != 7 && total != point) {
            roll1 = ( (rand() % SIDES)+1 );
            roll2 = ( (rand() % SIDES)+1 );
            total = roll1 + roll2;
            cout << "You rolled " << roll1 << " + " << roll2 << " = " << total << endl;
            if (total == point) {
                cout << "You win!" << endl;
            }
            else if (total == 7) {
                cout << "You lose!" << endl;
            }
        }
    }  
}