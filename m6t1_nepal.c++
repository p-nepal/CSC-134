#include <iostream>

using namespace std;

int main() {
    // we have six stats 
    const int NUM_STATS = 6;
    const int STR = 0;
    const int DEX = 1;
    const int CON = 2;
    const int INT = 3;
    const int WIS = 4;
    const int CHA = 5;

    // other variables
    int stats[NUM_STATS];
    string statnames[] = {"STR", "DEX", "CON", "INT", "WIS", "CHA"};
    int current_stat;
    double total_stats = 0;
    double average_stats;

    cout << "Please enter your character stats. " << endl;
    for (int i = 0; i < NUM_STATS; i++) {
        cout << statnames[i] << "-> ";
        cin >> current_stat;
        stats[i] = current_stat;
        total_stats += current_stat;
    }

    average_stats = total_stats / NUM_STATS;
    
    cout << "\nCharacter Sheet: " << endl;
    for (int i = 0; i < NUM_STATS; i++) {
        cout << statnames[i] << ": " << stats[i] << endl;
    }
    cout << "-----------------------------------" << endl;
    cout << "Stat total: " << total_stats << endl;
    cout << "Average: " << average_stats << endl;


    return 0;
}