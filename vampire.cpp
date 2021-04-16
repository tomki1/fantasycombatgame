/*********************************************************************
** Program name: Project 3
** Author: Kimberly Tom
** Date: 5/13/18
** Description: The vampire class holds the vampire functions. It is a derived class of the character class.
*********************************************************************/

#include "vampire.hpp"

// default constructor
Vampire::Vampire() {

    armor = 1;
    strengthPoints = 18;
}

// destructor
Vampire::~Vampire() {

}

// attack function
int Vampire::attackMove() {
    attack = attackRoll(1, 12);
    cout << getCharName() << " rolled a " << attack << endl;
    cout << getCharName() << " does " << attack << " damage" << endl;
    return attack;
}

// defense function
int Vampire::defenseMove(int damageTaken) {
    int abilityCharm = rand() % 2; // 50% chance of vampire using charm to prevent opponent's attack

    // gets attacked if does not use charm
    if (!abilityCharm) {
        int roll = defenseRoll(1, 6);
        cout << getCharName() << " has " << getStrengthPoints() << " strength points" << endl;
        cout << getCharName() << " rolled a " << roll << endl;
        defense = roll + armor;
        cout << getCharName() << " has " << armor << " armor" << endl;
        cout << getCharName() << " has " << defense << " defense" << endl;

        // if damage is less than defense, nor damage
        if (damageTaken < defense) {
            cout << getCharName() << " takes no damage" << endl;

        // if opponent Medusa rolled a 12, character instantly dies
        } else if (damageTaken == 500) {
            cout << getCharName() << " has turned to stone and loses remaining strength points" << endl;
            strengthPoints = 0;

        // calculate damage
        } else {
            int damage = damageTaken - defense;
            cout << getCharName() << " loses " << damage << " strength points" << endl;
            strengthPoints -= damage;
        }

        // character has remaining strength points
        if (strengthPoints > 0) {
            cout << getCharName() << " has " << getStrengthPoints() << " strength points left" << endl;
        }

        // character has no more strength points
        else {
            strengthPoints = 0;
            cout << getCharName() << " has " << getStrengthPoints() << " strength points left" << endl;
        }
        return strengthPoints;
    }

    // if character uses charm, prevents opponent's attack and loses no strength points
    else {
        cout << getCharName() << " used CHARM ability which prevented the opponent's attack!" << endl;
        cout << getCharName() << " has " << getStrengthPoints() << " strength points" << endl;
        cout << getCharName() << " has " << armor << " armor" << endl;
        cout << getCharName() << " has " << getStrengthPoints() << " strength points left" << endl;
        return strengthPoints;
    }
}