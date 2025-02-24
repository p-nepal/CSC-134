// CSC 134
// M3LAB1 - Choices
// Pranay Nepal (Mr. Norris' code)
// 2/24/2025

#include <iostream>
using namespace std;

// beginning of the main() method
int main() {
  // declare the variable we need
  const int FIGHT = 1;
  const int RUN = 2;
  const int HEAL = 3;
  int choice;

  // ask the question
  cout << "You're in a pokemon battle! Pikachu vs. Snorlax." << endl;
  cout << "1. Fight" << endl;
  cout << "2. Run"   << endl;
  cout << "3. Use Item" << endl;
  cout << "Type 1,2, or 3: "; 
  cin >> choice;


  // using if, make a decision based on the user's choice

  if (FIGHT == choice) {
  	cout << "You chose to fight" << endl;
    cout << "Sadly, you lose. " << endl;
  }
  else if (RUN == choice) {
  	cout << "You chose to run" << endl;
    cout << "You live to fight another day." << endl;
  }
  else if (HEAL == choice) {
    cout << "You use a potion." << endl;
    cout << "More here later..." << endl;
  }
  else {
  	cout << "I'm sorry, that is not a valid choice." << endl;
  }
  // finish up
  cout << "Thanks for playing!" << endl; // this runs no matter what they choose
  return 0; // exit without error
} // end of the main() method