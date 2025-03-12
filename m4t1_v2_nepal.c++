// CSC 134
// 3/10/2025

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // part 1 - just count five times
    /*
    int count = 1;
    while (count <= 5) {
        cout << "Hello #" << count << endl;
        // count = count + 1
        // count += 1;
        count++; // all do the same thing
    }
    cout << "Finished!" << endl;
    */
    // part 2 - table of squares
    const int MIN_NUM = 1;
    const int MAX_NUM = 20;
    int num = MIN_NUM;
    unsigned long sq;
    string filename = "squares.txt";

    // open the file
    ofstream outfile("squares.txt"); // this replaces cout
    if (!outfile.is_open()) {
        cout << "Error: could not open " << filename << endl;
        return -1; // error
    }


    outfile << endl << "Table of Squares" << endl;
    outfile << "----------------------------------" << endl;
    while (num <= MAX_NUM) {
        sq = num * num;
        outfile << num << "\t\t\t" << sq << endl;
        num++; 
    }
    // close the file
    outfile.close();
    return 0;
}