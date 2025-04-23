/*
CSC - 134
Pranay Nepal
4/23/2025
m6lab1
*/

#include <vector>
#include <iostream>
using namespace std;

int main() {
    const int BLACK = 0;
    const int RED = 1;
    const int EMPTY = -1;

    string shell_names[] = {"BLACK", "RED", "EMPTY"};

    int magazine[] = {RED, BLACK, BLACK};

    for (int shell : magazine) {
        string name = shell_names[shell];
        cout << "Next Shell: " << name << endl;
    }
    
    // Example two using stl vector
    cout << "VERSION 2" << endl;
    vector<int> mag;
    mag.push_back(RED);
    mag.push_back(BLACK);
    mag.push_back(BLACK);

    for (int shell : mag) {
        string name = shell_names[shell];
        cout << "Next Shell: " << name << endl;
    }

    return 0;
}