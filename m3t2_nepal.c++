#include <iostream>
// for random
#include <cmath>    
#include <ctime>
using namespace std;

int main() {
    const int SIDES_DIE_1 = 10; 
    const int SIDES_DIE_2 = 20;
    const int TO_HIT = 80;
    //int seed = 88;
    int seed = time(0);
    // seed the random number generator
    srand(seed);
    // rand() is a large number, so we take the remainder which is %
    int roll1, roll2, total;
    // roll a few times
    roll1 = ( (rand() % SIDES_DIE_1) );
    //cout << roll << endl;

    roll2 = ( (rand() % SIDES_DIE_2)+1 );
    //cout << roll << endl;

    total = roll1 * 10 + roll2;
    cout << "You rolled a " << roll1 * 10 << " and a " << roll2 << " and they both equal " << total << endl;

    if (total >= 30) {
        cout << "You Hit!" << endl;
        if (total >= 100) {
        cout << "It was a Critical Hit!" << endl;
        } 
    } else {
        cout << "You Missed :(" << endl;
    }
}