// CSC 134
// M2HW1 - Gold
// Pranay Nepal
// 2/19/2025


#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
   // Question 1, Bank Transaction
   
   // initializes the variables
   string name, lastname;
   double startingBalance, depositAmount, withdrawlAmount;
   int accountNumber = rand();

   // for formatting the numbers
   cout << setprecision(2) << fixed << showpoint;

   // this is the initial input 

   cout << "Input your name: ";
   getline(cin, name);
   cout << "Input your starting balance: ";
   cin >> startingBalance;
   cout << "Input your amount of deposit: ";
   cin >> depositAmount;
   cout << "Input your amount of withdrawl: ";
   cin >> withdrawlAmount;

   // calculates final balance

   double finalBalance = startingBalance + (depositAmount - withdrawlAmount);

   // this is what displays
   cout << endl;
   cout << "Account Name: " << name << endl;
   cout << "Account Number: " << accountNumber << endl;
   cout << "Final Account Balance: $" << finalBalance << "\n"<< endl;
   
   // Question 2, General Crates Update
   // Constants for cost and amount charged
   const double COST_PER_CUBIC_FOOT = 0.3;
   const double CHARGE_PER_CUBIC_FOOT = 0.52;

   // Variables
   double length, // The crate's length
          width,  // The crate's width
          height, // The crate's height
          volume, // The volume of the crate
          cost,   // The cost to build the crate
          charge, // The customer charge for the crate
          profit; // The profit made on the crate
   
   // Set the desired output formatting for numbers.
   cout << setprecision(2) << fixed << showpoint;

   //Prompt the user for the crates length, width, and height
   cout << "Enter the dimensions of the crate (in feet): \n";
   cout << "Length: ";
   cin >> length;
   cout << "Width: ";
   cin >> width;
   cout << "Height: ";
   cin >> height;

   // Calculate the crate's volume, the cost to produce it,
   // the charge to the customer, and the profit.
   volume = length * width * height;
   cost = volume * COST_PER_CUBIC_FOOT;
   charge = volume * CHARGE_PER_CUBIC_FOOT;
   profit = charge - cost;

   // Display the calculated data.
   cout << "\nThe volume of the crate is: ";
   cout << volume << " cubic feet.\n";
   cout << "Cost to build: $" << cost << endl;
   cout << "Charge to customer: $" << charge << endl;
   cout << "Profit: $" << profit << "\n" << endl;

   // Question 3, Pizza Party
   // initializes the variables
   int numOfPizza, numOfSlices, visitors, pizzaLeft, totalSlices;

   // prompts user by asking for pizza info
   cout << "Number of pizza boxes: ";
   cin >> numOfPizza;
   cout << "Number of slices per pizza: ";
   cin >> numOfSlices;
   cout << "Number of visitors: ";
   cin >> visitors;

   // calculate amount of leftover pizza
   totalSlices = numOfPizza * numOfSlices;
   pizzaLeft = totalSlices - (visitors * 3);

   // display the amount of pizza left over
   cout << "\nThere will be " << pizzaLeft << " slices of pizza left\n" << endl;

   // Question 4, FTCC Cheer
   // initialize variables
   string letsGo, school, team, cheerOne, cheerTwo;

   // setting the variable values
   letsGo = "Let's go ";
   school = "FTCC";
   team = "Trojans";
   cheerOne = letsGo + school;
   cheerTwo = letsGo + team;

   // outputting the cheer
   cout << cheerOne << endl;
   cout << cheerOne << endl;
   cout << cheerOne << endl;
   cout << cheerTwo << endl;

   return 0;
}