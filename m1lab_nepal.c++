// CSC 134
// Hello world
// Pranay Nepal
// 1/27/2025


#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
   // declaring
   string name = "Pranay";                 // strings hold words, sentences, names, ...
   int num_apples = 100;                    // int are whole numbers (no decimals)
   double price_each = 0.25;               // any nuber with a decimal is a double
   
   // say hi
   cout << "Welcome to " << name << "'s apple farm." << endl;
   cout << "We have " << num_apples << " apples in stock" << endl;
   cout << "Price per apple is: $" << price_each << endl;
   cout << endl;

   // calc total
   double total_cost = num_apples * price_each;

   // print answer
   cout << fixed << setprecision(2); // this makes it print 25.00 instead of 25
   cout << "The total for all " << num_apples << " is $" << total_cost << endl;
   cout << endl;
   return 0;