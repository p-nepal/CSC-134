/*
CSC-134-5H01
Pranay, Chazidy, & Isaiah
3/26/25
M5LAB1 - Choose Your Own Adventure
*/
#include <iostream>
#include <limits>
using namespace std;

// Function Prototypes
// Any functions you make will need to
// be listed here, in this format, at the top.
// This is so the compiler knows to save
// room for them in the final program.
void main_menu();
int get_choice(int size);
void choice_front_door();
void choice_back_door();
void choice_go_home();
void choice_go_upstairs();
void try_to_leave();
void choice_go_to_basement();
// TODO: add more choices here

int main() 
{
  cout << "M5LAB1 - Choose Your Own Adventure\n";
  
  // load up the main menu
  main_menu();

  // when we return here, we're done
  cout << "Thanks for playing!\n";
  return 0; // finished with no errors
}

void main_menu() 
{
  int choice;
  // Write a simple menu that lets the user choose 1,2, or 3, or 4 to quit.
  cout << "Main Menu\n";
  cout << "You're in front of a spooky old house...\n";
  cout << "Do you:\n";
  cout << "1. Try the front door\n";
  cout << "2. Sneak around back\n";
  cout << "3. Forget it, and go home\n";
  cout << "4. [Quit]\n";

  choice = get_choice(4);

  if 
    (1 == choice) {
    
  choice_front_door();

  } else if (2 == choice) {
    choice_back_door();
  } 
  else if (3 == choice) 
  {
    try_to_leave();
  } 
  else if (4 == choice) 
  {
    cout << "Ok, quitting game\n";
    return; // go back to main()
  }
}

int get_choice(int size) {
  // Only allow choices between 1 and size
  int choice=0;
  while (choice < 1 || choice > size) {
    cout << "Choose: ";
    cin >> choice;
        // Check if the input is valid
        if (cin.fail()) {
          cin.clear(); // Clear the error flag
          cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
          cout << "Invalid input. Please enter a number between 1 and " << size << "." << endl;
        }
  }
  cout << "You picked option #" << choice << endl;
  return choice;
}

// FUNCTION DEFINITIONS
// OK, we have the prototypes at the top, but
// now we have to actually write the functions.
// They go here, after main().
void choice_front_door() {
  cout << "Try the front door.\n";
  cout << "It's locked. \n";
  cout << "Do you:\n";
  cout << "1. Check around back\n";
  cout << "2. Give up and go home\n";

  int choice = get_choice(2);
  
  if (1 == choice) 
  {
    choice_back_door();
  } 
  else if (2 == choice)
  {
    try_to_leave();
  }
}

void choice_back_door() 
{ 
    cout << "You snuck around back through the gate.\n";
    cout << "You twist the knob on the back door and it flies open.\n"; 
    cout << "As you enter the house, the door slams shut behind you...\n";
    cout << "Using your phone flashlight, you look around and see a set of stairs...\n";
    cout << "--------------------------------\n";
    cout << "Do you:\n";
    cout << "1. Go up the stairs\n";
    cout << "2. Go in the basement\n";

    int choice = get_choice(2);

    if (choice == 1)
    {
        choice_go_upstairs();
    }
    else if (choice == 2)
    {
        choice_go_to_basement();
    }
}

void try_to_leave() 
{
  cout << "You attempt to exit through the front gate\n";
  cout << "The gate door is slammed and you are forced to stay in the courtyard of the house\n";
  cout << "You hear rustling in nearby bushes\nDo you:\n";
  int choice = get_choice(2);

  if (choice == 1) {
    
  } else if (choice == 2) {
    
  }
}

void choice_go_upstairs() 
{
  cout << "You ascend the stairs and come into a long hallway.\n ";
  cout << "As you continue to walk, the halls seem to never end\n";
  cout << "Do you:\n";
  cout << "1. Continue walking down the endless hallway\n2. Return downstairs while you still have the chance\n";
  
  int choice = get_choice(2);
  
  if (choice == 1)
  {
    cout << "You idiotically choose to endlessly walk down the hallway.\nNow the rest of your days are spent walking around the hall like a zombie";
    cout << "Thanks for playing!\n";
  }
}

void choice_go_to_basement() 
{
  cout << "You descend into the dark and creepy basement a see Three items \n";
  cout << "1. Cross \n";
  cout << "2. HoneyBun \n";
  cout << "Which will you pick? \n";
  
  int choice = get_choice(2);
}