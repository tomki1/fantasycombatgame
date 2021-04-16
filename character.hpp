/*********************************************************************
** Program name: Project 3
** Author: Kimberly Tom
** Date: 5/13/18
** Description: The header file for character.cpp.
*********************************************************************/

#ifndef CS162PROJECT3_CHARACTER_HPP
#define CS162PROJECT3_CHARACTER_HPP

#include<cstdlib>
#include<ctime>
#include<string>
#include<iostream>

using std::string;
using std::stringstream;
using std::cout;
using std::cin;
using std::endl;


class Character {

protected:
    int armor;
    int strengthPoints;
    string name;
    int attack;
    int defense;

public:
    Character(); // default constructor
    ~Character(); // destructor
    string getCharName(); // return name of character
    void setCharName(string name); // set name of character
    int getStrengthPoints(); // return strength points
    virtual int attackMove() = 0; // virtual attack function
    virtual int defenseMove(int damageTaken) = 0; // virtual defense function
    int attackRoll(int rollCount, int dieSides); // attack roll function
    int defenseRoll(int rollCount, int dieSides); // defense roll function
    int getAttack(); // return attack

private:

};


#endif
