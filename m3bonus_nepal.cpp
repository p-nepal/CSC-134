#include <iostream>
#include <fstream>
using namespace std;

// global variables for character stats
int strength, dexterity, constitution, intelligence, wisdom, charisma;
string name, charclass;
int level, hp;

// function prototypes (declarations)
void inputCharacterInfo();
void inputStats();
void displayCharacter();
void saveCharacter();
bool loadCharacter();
int rollDice();
int rollStat();

int main() {
    char choice;
    bool characterLoaded = false;

    while (!characterLoaded) {
        cout << "Type 'n' for a new character, 'l' to load an existing character: ";
        cin >> choice;

        if (choice == 'n') {
            inputCharacterInfo();
            inputStats();
            displayCharacter();
            cout << "Type 'a' to accept, 'r' to reroll: ";
            cin >> choice;
            while (choice == 'r') {
                inputStats();
                displayCharacter();
                cout << "Type 'a' to accept, 'r' to reroll: ";
                cin >> choice;
            }
            saveCharacter();
            characterLoaded = true;
        } else if (choice == 'l') {
            if (loadCharacter()) {
                displayCharacter();
                characterLoaded = true;
            }
        } else {
            cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}

void inputCharacterInfo() {
    cout << "Enter character name: ";
    cin >> name;
    cout << "Enter character class: ";
    cin >> charclass;
}

void inputStats() {
    strength = rollStat();
    dexterity = rollStat();
    constitution = rollStat();
    intelligence = rollStat();
    wisdom = rollStat();
    charisma = rollStat();
    level = 1; // starting level
    hp = constitution + rollDice(); // simple formula for HP
}

void displayCharacter() {
    cout << "\nCharacter Stats:\n\n";
    cout << "Name: " << name << endl;
    cout << "Class: " << charclass << endl;
    cout << "Strength: " << strength << endl;
    cout << "Dexterity: " << dexterity << endl;
    cout << "Constitution: " << constitution << endl;
    cout << "Intelligence: " << intelligence << endl;
    cout << "Wisdom: " << wisdom << endl;
    cout << "Charisma: " << charisma << endl;
    cout << "Level: " << level << endl;
    cout << "HP: " << hp << endl;
}

void saveCharacter() {
    ofstream file(name + "_m3_bonus_nepal.md");
    file << name << "\n"
         << charclass << "\n"
         << strength << "\n"
         << dexterity << "\n"
         << constitution << "\n"
         << intelligence << "\n"
         << wisdom << "\n"
         << charisma << "\n"
         << level << "\n"
         << hp << endl;
    file.close();
    cout << "Character saved!\n";
}

bool loadCharacter() {
    cout << "Enter character name to load: ";
    cin >> name;
    ifstream file(name + "_m3_bonus_nepal.md");
    if (file) {
        file >> name >> charclass >> strength >> dexterity >> constitution >> intelligence >> wisdom >> charisma >> level >> hp;
        file.close();
        cout << "Character loaded!\n";
        return true;
    } else {
        cout << "No saved character found for " << name << ".\n";
        return false;
    }
}

int rollDice() {
    return rand() % 6 + 1;
}

int rollStat() {
    // roll 3d6
    int stat;
    stat = rollDice() + rollDice() + rollDice();
    return stat;
}


