/*
CSC-134
Pranay Nepal
3/23/2025
m5t1 basic functions
*/

#include <iostream>
using namespace std;

// First Ver -- just call some functions

// function declarations
void say_hi();
int add(int first, int second);

int main() {
    int my_num = 12;
    cout << "in main(), my_num = " << my_num << endl;
    say_hi();
    cout << "2 + 2 = " << add(2, 2) << endl;
    int num = add(2, 2)
    print_number(num);
}

// function definitions (full thing)
// void function -- just call it, no return

void say_hi() {
    cout << "Hi" << endl;
}

// value returning function
int add(int first, int second) {
    int answer = first + second;
    return answer;
}

// void but still takes a value (parameter)
void print_number(int num) {
    cout << num << endl;
}