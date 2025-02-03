// CSC 134
// M2T2 - Receipt 
// Pranay Nepal
// 2/3/2025


#include <iostream>
#include <iomanip>      // for the setprecision()

using namespace std;

int main()
{
   string store_name = "Pranay's Barbecue";
   string chicken_platter = "Barbecue Chicken Platter";
   double food_price = 19.99;
   int how_many;

   // our receipt variables
   double subtotal, total;
   double tax_percent, tax_cost;
   
   // do the order
   cout << "Welcome to the " << store_name << "!" << endl;
   cout << "How many chicken platters would you like? " << endl;
   cin >> how_many;
   

   // calculate the subtotal, tax, total
   tax_percent = 0.08;
   subtotal = food_price * how_many;
   tax_cost = subtotal * tax_percent;
   total = subtotal + tax_cost;

   cout << setprecision(2) << fixed << "You ordered " << how_many << " " << chicken_platter << "(s)" << "\nYour total is $" << total << endl;
   cout << endl;

   // print the receipt
   cout << setprecision(2) << fixed; 
   cout << how_many << " " << chicken_platter << "(s)" << setw(11) << food_price * how_many << endl;
   cout << "-------------------------------------------" << endl;
   cout << setw(12) << "Subtotal: $ " << setw(31) << subtotal << endl;
   cout << setw(12) << "Tax (8%): $  " << setw(30) << tax_cost << endl;
   cout << "-------------------------------------------" << endl;
   cout << setw(12) << "Total:    $ " << setw(31) << total << endl;
   cout << "-------------------------------------------" << endl;
   return 0;
}