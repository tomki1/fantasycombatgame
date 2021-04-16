/*********************************************************************
** Program name: Project 3
** Author: Kimberly Tom
** Date: 5/13/18
** Description: The harryPotter class holds the harryPotter functions. It is a derived class of the character class.
*********************************************************************/

#include "harryPotter.hpp"

// default constructor
HarryPotter::HarryPotter() {

    abilityHogwarts = true; // set special ability to true
    armor = 0;
    strengthPoints = 10;

}

// destructor
HarryPotter::~HarryPotter() {

}

// attack function
int HarryPotter::attackMove() {
    attack = attackRoll(2, 6);
    cout << getCharName() << " rolled a " << attack << endl;
    cout << getCharName() << " does " << attack << " damage" << endl;
    return attack;
}

// defense function
int HarryPotter::defenseMove(int damageTaken) {
    int roll = defenseRoll(2, 6);
    cout << getCharName() << " has " << getStrengthPoints() << " strength points" << endl;
    cout << getCharName() << " rolled a " << roll << endl;
    defense = roll + armor;
    cout << getCharName() << " has " << armor << " armor" << endl;
    cout << getCharName() << " has " << defense << " defense" << endl;
    if (damageTaken < defense) {
        cout << getCharName() << " takes no damage" << endl;
    }

    // if opponent Medusa rolled a 12, character instantly dies
    else if (damageTaken == 500) {
        cout << getCharName() << " has turned to stone and loses remaining strength points" << endl;
        strengthPoints = 0;
    }

    // calculate damage
    else {
        int damage = damageTaken - defense;
        cout << getCharName() << " loses " << damage << " strength points" << endl;
        strengthPoints -= damage;
    }

    // character has remaining strength points
    if (strengthPoints > 0) {
        cout << getCharName() << " has " << getStrengthPoints() << " strength points left" << endl;
    }

    // Harry lost all strength points in first life, will get 20 strength points for second life
    else if (strengthPoints <= 0 && abilityHogwarts) {
        strengthPoints = 20; // Harry Potter uses his second life ability which gives him 20 strength points
        cout << getCharName() << "'s strength points reached below 0, however, he uses his"
                " special HOGWARTS ability to resurrect from the dead and now has 20 strength points!" << endl;
        abilityHogwarts = false; // set special ability to false
    }

    // character has no more strength points
    else {
        strengthPoints = 0;
        cout << getCharName() << " has " << getStrengthPoints() << " strength points left" << endl;
    }
    return strengthPoints;
}
