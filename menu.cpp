/*********************************************************************
** Program name: Project 3
** Author: Kimberly Tom
** Date: 5/13/18
** Description: The menu class holds the menu functions.
*********************************************************************/

#include "menu.hpp"

// show start menu for game
void startMenu() {
    cout << "***Fantasy Combat Game Main Menu***" << endl;
    cout << "Please select whether you want to start a new game or quit the game" << endl;
    cout << "1. Start New Game" << endl;
    cout << "2. Quit Game" << endl;
    cout << "enter choice:" << endl;
    int choice;
    choice = validateStart();

    if (choice == 1) {
        beginGame(); // starts game

    }
    else if (choice == 2) {
        cout << "Game is quitting. Goodbye." << endl;
    }
}

// obtain character selection from user
void beginGame() {

    cout << "Select two characters to fight each other" << endl;
    cout << "The character on the blue team gets to attack first" << endl;
    cout << "1. Vampire: 18 strength points, 1 armor, ability: Charm" << endl;
    cout << "2. Barbarian: 12 strength points, 0 armor, no ability" << endl;
    cout << "3. Blue Men: 12 strength points, 3 armor, ability: Mob" << endl;
    cout << "4. Medusa: 8 strength points, 2 armor, ability: Glare" << endl;
    cout << "5. Harry Potter: 10 strength points, 0 armor, ability: Hogwarts" << endl;
    cout << "Enter blue team character choice:" << endl;

    // obtain user's 1st choice and perform input validation on choice
    int char1;
    char1 = validate();
    if (char1 == 1) {
        cout << "You have selected vampire" << endl;
    }
    else if (char1 == 2) {
        cout << "You have selected Barbarian" << endl;
    }
    else if (char1 == 3) {
        cout << "You have selected Blue Men" << endl;
    }
    else if (char1 == 4) {
        cout << "You have selected Medusa" << endl;
    }
    else {
        cout << "You have selected Harry Potter" << endl;
    }

    cout << "Enter red team character choice:" << endl;

    // obtain user's 2nd choice and perform input validation on choice
    int char2;
    char2 = validate();
    if (char2 == 1) {
        cout << "You have selected vampire" << endl;
    }
    else if (char2 == 2) {
        cout << "You have selected Barbarian" << endl;
    }
    else if (char2 == 3) {
        cout << "You have selected Blue Men" << endl;
    }
    else if (char2 == 4) {
        cout << "You have selected Medusa" << endl;
    }
    else {
        cout << "You have selected Harry Potter" << endl;
    }

    GamePlay gamePlay(char1, char2); // set user selected characters

    gamePlay.simulation(); // begin simulation
}