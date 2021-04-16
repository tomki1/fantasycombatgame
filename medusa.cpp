/*********************************************************************
** Program name: Project 3
** Author: Kimberly Tom
** Date: 5/13/18
** Description: The medusa class holds the medusa functions. It is a derived class of the character class.
*********************************************************************/

#include "medusa.hpp"

// default constructor
Medusa::Medusa() {

    armor = 3;
    strengthPoints = 8;
}

// destructor
Medusa::~Medusa() {

}

// attack function
int Medusa::attackMove() {
    attack = attackRoll(2, 6);
    cout << getCharName() << " rolled a " << attack << endl;

    if (attack == 12) {
        cout << getCharName() << " uses her special GLARE ability and turns her enemy into stone, instantly killing"
                " her opponent!" << endl;
        attack = 500;
    }
    else {
        cout << getCharName() << " does " << attack << " damage" << endl;
    }
    return attack;
}

int Medusa::defenseMove(int damageTaken) {
    int roll = defenseRoll(1, 6);
    cout << getCharName() << " has " << getStrengthPoints() << " strength points" << endl;
    cout << getCharName() << " rolled a " << roll << endl;
    defense = roll + armor;
    cout << getCharName() << " has " << armor << " armor" << endl;
    cout << getCharName() << " has " << defense << " defense" << endl;

    // if damage is less than defense, no damage
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

    // character has no more strength points
    else {
        strengthPoints = 0;
        cout << getCharName() << " has " << getStrengthPoints() << " strength points left" << endl;
    }
    return strengthPoints;
}
