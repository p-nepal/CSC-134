// CSC 134
// M3HW1 - Gold
// Pranay Nepal
// 03/13/2025

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;
int randNum() { // for question 4
    int roll = ( (rand() % 10) );
    return roll;
}
int main() {
    // question 1: chat bot
    cout << "Question 1" << endl;
    string response;
    cout << "Do you like me? Please type yes or no." << endl; // question the chatbot asks the 
    cin >> response; // collects response
    // checks for if they said yes
    if (response == "yes") { 
        cout << "That's great! I'm sure we'll get along." << endl;
    // checks for if they said no
    } else if (response == "no") { 
        cout << "Well, maybe you'll learn to like me later." << endl;
    } // default input if they said neither yes or no
    else {
        cout << "If you're not sure… that's OK." << endl;
    }
    
    // question 2: receipt calculator
    string store_name = "Pranay's Barbecue";
    string chicken_platter = "Barbecue Chicken Platter";
    double food_price;
    int how_many, experience;
 
    // our receipt variables
    double subtotal, total;
    double tax_percent, tax_cost, tip_percent, tip_amount;
    
    // do the order
    cout << "Welcome to the " << store_name << "!" << endl;
    cout << "How many chicken platters would you like? " << endl;
    cin >> how_many;
    cout << "What is the cost of each? " << endl;
    cin >> food_price;
    cout << "Please enter 1 if the order is dine in, 2 if it is to go" << endl;
    cin >> experience;
 
    // calculate the subtotal, tax, total
    tax_percent = 0.08;
    tip_percent = 0.15;
    subtotal = food_price * how_many;
    tax_cost = subtotal * tax_percent;
    if (experience == 1) {
        tip_amount = tip_percent * subtotal;
        total = subtotal + tax_cost + tip_amount;
    } else {
        total = subtotal + tax_cost;
    }
 
    cout << setprecision(2) << fixed << "You ordered " << how_many << " " << chicken_platter << "(s)" << "\nYour total is $" << total << endl;
    cout << endl;
 
    // print the receipt
    cout << setprecision(2) << fixed; 
    cout << how_many << " " << chicken_platter << "(s)" << setw(14) << food_price * how_many << endl;
    cout << "-------------------------------------------" << endl;
    cout << setw(12) << "Subtotal: $ " << setw(31) << subtotal << endl;
    cout << setw(12) << "Tax (8%): $  " << setw(30) << tax_cost << endl;
    if (experience == 1) {
        cout << setw(12) << "Tip (15%): $  " << setw(29) << tip_amount << endl;
    }
    cout << "-------------------------------------------" << endl;
    cout << setw(12) << "Total:    $ " << setw(31) << total << endl;
    cout << "-------------------------------------------" << endl;
    
    
    // question 3: choose your own adventure game
    // variables
    
    int choice1, choice2, choice3, choice4, choice5, choice6;
    /*
    srand(time(0));
    int diceroll() {
        roll = ( (rand() % 2) );
        return roll;
    } // could be used to make the game even more random
    */
    // story line
    cout << "You are a knight of a grand kingdom, your king however is cruel and vindictive, and you are given the task by your people to get rid of him." << endl;
    cout << "However failing to navigate this situation properly will lead to your demise, do you think you have what it takes? (0 for no and 1 for yes)" << endl;
    cin >> choice1; // doesn't matter, gives illusion of choice
    cout << "Honestly I don't care what you said, you're doing it anyway." << endl;
    cout << "You must choose to either stay in the castle and spy on the king or become a rebel? \n (0 for spy or 1 for rebel)" << endl;
    cin >> choice2; // you must pick the royal bertrayal storyline, eventually there will be multiple storylines, but not right now

    if (choice2 == 0) {
        cout << "The Royal Betrayal Storyline:" << endl;
        cout << "Gaining the Castle's Support:" << endl;
        cout << "You must now choose to try and convince the royal family or the noblemen and lords: \n (0 for royal or 1 for noble)" << endl;
        cin >> choice3;
    
        if (choice3 == 0) {
            cout << "I guess blood is thicker than water..." << endl;
            cout << "They listened to your grievances, but went behind your back and reported you to the king." << endl;
            cout << "The king has given you a public execution and made you an example, stunting the growth of the rebellion." << endl;
            cout << "You failed..." << endl;
        } else if (choice3 == 1) {
            cout << "It's not what you know, it's who you can buy." << endl;
            cout << "You told them about the potential money they could be losing having the peasants constantly in fear." << endl;
            cout << "They looked to each other and all agreed to support you in this potential coup." << endl;
            cout << "\n-----------------------------------------------------------------------------------------------------\n" << endl;
            cout << "Some time later, the king gives you a mission (remember you're his spy)." << endl;
            cout << "He hears rumbles of a rebellion and tasks you with going to The Quiet Barrel, a pub that may harbor rebellionists and dissenters." << endl;
            cout << "Your job is to find Dan Krest, say you want to join his cause, and to deliver any information about a possible rebellion to the king." << endl;
            // Dan Krest is an anagram for Ned Stark from Game of Thrones
            cout << "The king urges you not to harm him as he says it will turn Dan into a martyr, making his job even more difficult." << endl;
            cout << "So what will it be, will you do the mission to gain the king's trust or lie and fear possible imprisonment? \n(0 for doing the mission or 1 for to lie)" << endl;
            cin >> choice4;
            if (choice4 == 0) {
                cout << "Aren't you a good little boy!" << endl;
                cout << "You sincerely do the mission to gain the king's trust. You go to the bar and try to find Dan Krest." << endl;
                cout << "You successfully gain Dan's trust, get the information you need, and return to the king." << endl;
                cout << "The king rewards you with more power and trust, but you know this is a dangerous game you're playing." << endl;
                cout << "\n-----------------------------------------------------------------------------------------------------\n" << endl;
                cout << "You have now reached a critical point in your quest to overthrow the king." << endl;
                cout << "The rebellion is growing, but the path ahead is full of difficult choices." << endl;
                cout << "You have three options, each with its own potential outcome." << endl;
                cout << "1. Open Rebellion - Rally the nobility and fight the king head-on." << endl;
                cout << "2. Subterfuge - Use your influence to manipulate the nobility and weaken the king's power quietly." << endl;
                cout << "3. Infiltrate - Attempt to infiltrate the castle and take down the king from within." << endl;
                cout << "Please enter your choice (1 for Open Rebellion, 2 for Subterfuge, 3 for Infiltrate): " << endl;
                cin >> choice5;
                if (choice5 == 1) {
                    cout << "You can't buy loyalty when the price is betrayal." << endl;
                    cout << "You attempt to rally the people, but the noblemen betray you, siding with the king." << endl;
                    cout << "Desperate, you try to stir rebellion among the masses, but the king's spies spread fear, and no one rises to join you." << endl;
                    cout << "Captured by the king's soldiers, you are executed for treason, and the rebellion is crushed." << endl;
                    cout << "You failed..." << endl;
                } else if (choice5 == 2) {
                    cout << "\"A house divided against itself cannot stand.\" — Abraham Lincoln" << endl;
                    cout << "As the castle's power structure weakens, you quietly rise in influence, garnering more support from the nobles." << endl;
                    cout << "Your actions weaken the king's control, splitting his loyalties, and you work in the shadows to build your own faction." << endl;
                    cout << "Eventually, you reveal your true intentions to the court, and the king is caught off guard by your rise to power." << endl;
                    cout << "With half of the nobility behind you and the king's control slipping, you challenge him to a duel to end this once and for all." << endl;
                    cout << "He takes the bait and sets up the duel, challenging you to defeat him." << endl;
                    cout << "As both of you fight, he charges with a slash. Do you dodge or hold your blade to stab him? \n(0 for dodge, 1 for stab)" << endl;
                    cin >> choice6;
                    if (choice6 == 0) {
                        cout << "You bought yourself time, but not survival." << endl;
                        cout << "You dodge the king's attack, narrowly avoiding a fatal blow." << endl;
                        cout << "However, you miss your chance to land a decisive blow. The king retaliates and strikes you down." << endl;
                        cout << "You have failed... your rebellion is over." << endl;
                    } else if (choice6 == 1) {
                        cout << "The king's reign ends at the tip of your blade." << endl;
                        cout << "You hold your blade out as the king charges, and your blade strikes true!" << endl;
                        cout << "The king stumbles back, wounded, and unable to defend himself." << endl;
                        cout << "You press the advantage, ending the king's life and securing your victory." << endl;
                        cout << "With the king dead, your rebellion is victorious, and the kingdom is now under your control." << endl;
                    } else {
                        cout << "Not a valid choice. Restart." << endl;
                    }
                } else if (choice5 == 3) {
                    cout << "You've learned too late that the walls have ears—and now, they speak." << endl;
                    cout << "You tried to sneak around the castle, but the guards were too alert." << endl;
                    cout << "Caught in the act, you were swiftly arrested and thrown in the dungeons." << endl;
                    cout << "The rebellion, once full of hope, now faces defeat without its most trusted knight." << endl;
                    cout << "You failed..." << endl;
                } else {
                    cout << "Not a valid choice. Restart." << endl;
                }
            } else if (choice4 == 1) {
                cout << "You can't have your cake and eat it too." << endl;
                cout << "You decided to lie about the mission and avoid going to The Quiet Barrel." << endl;
                cout << "However, the king already knew about the rebellion and used this as a test of your loyalty." << endl;
                cout << "He had you planted in the bar, knowing you would either do the mission or refuse." << endl;
                cout << "When you didn't show up, the king realized you disobeyed him." << endl;
                cout << "As a result, he had you imprisoned for disobeying his orders, and the rebellion's hope crumbled." << endl;
                cout << "You failed..." << endl;
            } else {
                cout << "Not a valid choice. Restart." << endl;
            }
        } else {
        cout << "Not a valid choice. Restart." << endl;
        }
    } else if (choice2 == 1) {
        cout << "The Rebel Storyline:" << endl;
        cout << "You run away from the castle to try to plan your rebellion." << endl;
        cout << "However the king's spies catch you trying to desert your position and take you to the king to be imprisoned." << endl;
        cout << "You are to remain in prison indefinately. " << endl;
        cout << "You failed..." << endl;
        
    } else {
        cout << "Not a valid choice. Restart." << endl;
    }
    
    // question 4: math practice
    // variables
    int randNum1, randNum2, answer;
    // Seed the random number generator
    srand(time(0));
    // getting the random numbers
    randNum1 = randNum();
    randNum2 = randNum();

    cout << "What is " << randNum1 << " plus " << randNum2 << "?" << endl;
    cin >> answer;
    if (randNum1 + randNum2 == answer) {
        cout << "You got it right, good job!" << endl;
    } else {
        cout << "You got it wrong, better luck next time." << endl;
    }
    return 0;
}