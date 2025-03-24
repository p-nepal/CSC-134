/*
CSC - 134
Pranay Nepal
3/23/2025
m5t2 - table of squares function
*/

#include <iostream>
using namespace std;

int find_squares(int number);
void print_line(int number, int square);

int main() {
    for (int num = 1; num <= 10; num++) {
        int square = num * num;
        print_line(num, square);
    }
}

int find_square(int number) {
    int product = number * number;
    return product;
}

void print_line(int number, int square) {
    cout << number << "\t" << square << endl;
}