/*
CSC-134-5H01
Pranay Nepal
04/13/25
M5HW1
Gold
*/
#include <iostream>
#include <limits>
#include <cmath>
#include <iomanip>
using namespace std;

// input validating functions
double check_number(double variable) {
    while (cin.fail()) {
        cin.clear(); // Clear the error flag
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
        cout << "Invalid input. Please enter a number. " << endl;
        cin >> variable;
    }
    return variable;
}

double check_non_negative_number(double number) {
    while (cin.fail() || number < 0) {
        cin.clear(); // Clear the error flag
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
        cout << "Invalid input. Please enter a number that is either 0 or greater. " << endl;
        cin >> number;
    }
    return number;
}

double check_positive_number(double number) {
    while (cin.fail() || number <= 0) {
        cin.clear(); // Clear the error flag
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
        cout << "Invalid input. Please enter a positive number. " << endl;
        cin >> number;
    }
    return number;
}

int get_choice(int size) {
    // Only allow choices between 1 and size
    int choice;
    while (choice < 1 || choice > size) {
        cin >> choice;
        // Check if the input is valid
        if (cin.fail()) {
        cin.clear(); // Clear the error flag
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
        cout << "Invalid input. Please enter a number between 1 and " << size << "." << endl;
        }
    }
    return choice;
}

// functions
void average_rainfall_calculator();
void block_volume();
void roman_numeral_converter();
void geometry_calculator();
void distance_tavelled_calculator();

// displays main menu
int main() {
    bool keep_going = true;
    int input;
    string confirmation;
    while (keep_going) {
        cout << "Menu: " << endl;
        cout << "[Option 1] - Average Rainfall Calculator" << endl;
        cout << "[Option 2] - Block Volume Calculator" << endl;
        cout << "[Option 3] - Roman Numeral Converter" << endl;
        cout << "[Option 4] - Geometry Calculator" << endl;
        cout << "[Option 5] - Distance Travelled Calculator" << endl;
        cout << "[Option 6] - Exit" << endl;
        cout << "Pick your preferred option by typing in the option number: ";
        input = get_choice(6);
        if (input == 1) {
            average_rainfall_calculator();
            cout << "Do you want to continue using this program? (y to stay and any other input to exit the program)" << endl;
            cin >> confirmation;
            if (confirmation == "y") {
                continue;
            } else {
                cout << "Thank you for using my program!" << endl;
                keep_going = false;
            }
        } else if (input == 2) {
            block_volume();
            cout << "Do you want to continue using this program? (y to stay and any other input to exit the program)" << endl;
            cin >> confirmation;
            if (confirmation == "y") {
                continue;
            } else {
                cout << "Thank you for using my program!" << endl;
                keep_going = false;
            }
        } else if (input == 3) {
            roman_numeral_converter();
            cout << "Do you want to continue using this program? (y to stay and any other input to exit the program)" << endl;
            cin >> confirmation;
            if (confirmation == "y") {
                continue;
            } else {
                cout << "Thank you for using my program!" << endl;
                keep_going = false;
            }
        } else if (input == 4) {
            geometry_calculator();
            cout << "Do you want to continue using this program? (y to stay and any other input to exit the program)" << endl;
            cin >> confirmation;
            if (confirmation == "y") {
                continue;
            } else {
                cout << "Thank you for using my program!" << endl;
                keep_going = false;
            }
        } else if (input == 5) {
            distance_tavelled_calculator();
            cout << "Do you want to continue using this program? (y to stay and any other input to exit the program)" << endl;
            cin >> confirmation;
            if (confirmation == "y") {
                continue;
            } else {
                cout << "Thank you for using my program!" << endl;
                keep_going = false;
            }
        } else if (input == 6) {
            cout << "Are you sure you want to exit the program? (y to exit and any other input to continue using the program)" << endl;
            cin >> confirmation;
            if (confirmation == "y") {
                cout << "Thank you for using my program!" << endl;
            } else {
                continue;
            }
            keep_going = false;
        }
    }
    return 0;
}

void average_rainfall_calculator() {
    string month1, month2, month3;
    double month1Rain, month2Rain, month3Rain;
    cout << "Welcome to the average rainfall calculator!" << endl;
    cout << "This program will help you find the average rainfall between three months." << endl;
    cout << "Enter month: ";
    cin >> month1;
    cout << "Enter rain fall (in inches) for " << month1 << ": " << endl;
    cin >> month1Rain;
    month1Rain = check_non_negative_number(month1Rain);
    cout << "Enter month: ";
    cin >> month2;
    cout << "Enter rain fall (in inches) for " << month2 << ": " << endl;
    cin >> month2Rain;
    month2Rain = check_non_negative_number(month2Rain);
    cout << "Enter month: ";
    cin >> month3;
    cout << "Enter rain fall (in inches) for " << month3 << ": " << endl;
    cin >> month3Rain;
    month3Rain = check_non_negative_number(month3Rain);
    double average = (month1Rain + month2Rain + month3Rain) / 3.0;
    cout << fixed << setprecision(2);
    cout << "The average rainfall for " << month1 << ", " << month2 << ", " << month3 << " " << "is " << average << " inch(es)." << endl;
}

void block_volume() {
    double length, width, height;
    cout << "Welcome to the block (rectangular prism) calculator" << endl;
    cout << "Input the the length, width, and height of your block and this will give you it's volume." << endl;
    cout << "Length: " << endl;
    cin >> length;
    length = check_positive_number(length);
    cout << "Width: " << endl;
    cin >> width;
    width = check_positive_number(width);
    cout << "Height: " << endl;
    cin >> height;
    height = check_positive_number(height);
    double Volume = length * width * height;
    cout << "The volume is " << Volume << "." << endl;
}

void roman_numeral_converter() {
    int number;
    cout << "Welcome to the Roman Numeral Converter." << endl;
    cout << "Input a number between 1 and 10 and this will return the corresponding Roman Numeral." << endl;
    number = get_choice(10);
    if (number == 1) {cout << "I" << endl;}
    if (number == 2) {cout << "II" << endl;}
    if (number == 3) {cout << "III" << endl;}
    if (number == 4) {cout << "VI" << endl;}
    if (number == 5) {cout << "V" << endl;}
    if (number == 6) {cout << "VI" << endl;}
    if (number == 7) {cout << "VII" << endl;}
    if (number == 8) {cout << "VIII" << endl;}
    if (number == 9) {cout << "IX" << endl;}
    if (number == 10) {cout << "X" << endl;}
}

void geometry_calculator() {
    int input;
    cout << "Welcome to the Geometry Calculator." << endl;
    cout << "Choose between 1-4" << endl;
    cout << "Menu" << endl;
    cout << "1. Calculate the Area of a Circle" << endl;
    cout << "2. Calculate the Area of a Rectangle" << endl;
    cout << "3. Calculate the Area of a Triangle" << endl;
    cout << "4. Return to main menu" << endl;
    input = get_choice(4);
    if (input == 1) {
        double radius;
        const double PI = 3.14159;
        cout << "You chose to calculate the area of a Circle." << endl;
        cout << "Input the radius of the circle: " << endl;
        cin >> radius;
        radius = check_positive_number(radius);
        double circle_area = PI * (radius * radius);
        cout << "Your circle's area is " << circle_area << endl;
    } else if (input == 2) {
        double length, width;
        cout << "You chose to calculate the area of a Rectangle." << endl;
        cout << "Input the length of the rectangle: " << endl;
        cin >> length;
        length = check_positive_number(length);
        cout << "Input the width of the rectangle: " << endl;
        cin >> width;
        width = check_positive_number(width);
        double rectangle_area = length * width;
        cout << "Your rectangle's area is " << rectangle_area << endl;
    } else if (input == 3) {
        double base, height;
        cout << "You chose to calculate the area of a Triangle." << endl;
        cout << "Input the base of the triangle: " << endl;
        cin >> base;
        base = check_positive_number(base);
        cout << "Input the height of the triangle: " << endl;
        cin >> height;
        height = check_positive_number(height);
        double triangle_area = base * height * (0.5);
        cout << "Your triangle's area is " << triangle_area << endl;
    } else if (input == 4) {
        main();
    }
}

void distance_tavelled_calculator() {
    int time, i;
    double mph;
    cout << "Welcome to the Distance Travelled Calculator." << endl;
    cout << "When you enter your vehicles speed (in mph) and the time travelled (in hours) this will create a table with each hour and the distance travelled at that point" << endl;
    cout << "If you enter a non whole number for time it will be rounded down" << endl;
    cout << "Vehicle's speed (mph): " << endl;
    cin >> mph;
    mph = check_positive_number(mph);
    cout << "Hours has it travelled: " << endl;
    cin >> time;
    time = check_positive_number(time);
    cout << "--------------------------------" << endl;
    for (i = 0; i <= time; i++) {
        double Distance = mph * i;
        cout << i << "         " << Distance << endl;
    }
}