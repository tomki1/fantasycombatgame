/*********************************************************************
** Program name: Project 3
** Author: Kimberly Tom
** Date: 5/13/18
** Description: The blueMen class holds the blueMen functions. It is a derived class of the character class.
*********************************************************************/

#include "blueMen.hpp"

// default constructor
BlueMen::BlueMen() {

    armor = 3;
    strengthPoints = 12;
}

// destructor
BlueMen::~BlueMen() {

}

// attack function
int BlueMen::attackMove() {
    attack = attackRoll(2, 10);
    cout << getCharName() << " rolled a " << attack << endl;
    cout << getCharName() << " does " << attack << " damage" << endl;
    return attack;
}

// defense function
int BlueMen::defenseMove(int damageTaken) {
    int roll = 0;

    // if strength points are greater than 8, 3 defense dice rolls
    if (getStrengthPoints() > 8) {
        roll = defenseRoll(3, 6);
    }

    // if strength points are greater than 8, 2 defense dice rolls
    else if (getStrengthPoints() > 4 && getStrengthPoints() < 9) {
        roll = defenseRoll(2, 6);
    }

    // if strength points are greater than 8, 1 defense die roll
    else if (getStrengthPoints() < 5) {
        roll = defenseRoll(1, 6);
    }

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
        if (getStrengthPoints() > 4 && getStrengthPoints() < 9) {
            cout << getCharName() << " has 2 defense dice remaining due to losing some MOB ability" << endl;
        }
        if (getStrengthPoints() < 5) {
            cout << getCharName() << " has 1 defense die remaining due to losing some MOB ability" << endl;
        }
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
