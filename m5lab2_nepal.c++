// M5LAB2
// Header goes here

#include <iostream>
using namespace std;

// Declare (Write the prototypes for)
// the getLength,
// getWidth, getArea, and displayData
// functions here.

double getLength();
double getWidth();
double getCostPerInch();
double getArea(double length, double width);
double getTotalCost(double costPerInch, double area);
void displayData(double length, double width, double area, double costPerInch, double totalCost);

int main()
{
	// This program calculates the area of a rectangle.
	// TODO: fix any syntax errors

   double length,    // The rectangle's length
          width,     // The rectangle's width
          costPerInch, // Cost per square inch
          totalCost,   // Total Cost
          area;      // The rectangle's area

   // Get the rectangle's length.
   length = getLength();

   // Get the rectangle's width.
   width = getWidth();

   // Get the cost per square inch
   costPerInch = getCostPerInch();

   // Get the rectangle's area.
   area = getArea(length, width);

   // Get the total cost
   totalCost = getTotalCost(costPerInch, area);

   // Display the rectangle's data.
   displayData(length, width, area, costPerInch, totalCost);

   return 0;
}

//***************************************************
// TODO: write the getLength, getWidth, getArea,    *
// and displayData functions below.                 *
//***************************************************

double getLength() {
    double length;
    cout << "What is the length? " << endl;
    cin >> length;
    return length;
}

double getWidth()  {
    double width;
    cout << "What is the width? " << endl;
    cin >> width;
    return width;
}

double getCostPerInch() {
    double costPerInch;
    cout << "What is the Cost Per Inch? " << endl;
    cin >> costPerInch;
    return costPerInch;
}

double getArea(double length, double width) {
    double area = width * length;
    return area;
}

double getTotalCost(double costPerInch, double area) {
    double totalCost = costPerInch * area;
    return totalCost;
}

void displayData(double length, double width, double area, double costPerInch, double totalCost) {
    cout << "\nWidth: " << width << endl;
    cout << "Length: " << length << endl;
    cout << "Area: " << area << endl;
    cout << "Cost Per Inch: $" << costPerInch << endl;
    cout << "Total Cost: $" << totalCost << endl;
}