/*********************************************************************
** Program name: Project 3
** Author: Kimberly Tom
** Date: 5/13/18
** Description: The header file for Barbarian.cpp.
*********************************************************************/

#ifndef CS162PROJECT3_BARBARIAN_HPP
#define CS162PROJECT3_BARBARIAN_HPP

#include"character.hpp"

class Barbarian: public Character { // derived class of the character class

private:
public:
    Barbarian(); // default constructor
    ~Barbarian(); // destructor
    int attackMove(); // attack function
    int defenseMove(int damageTaken); // defense function
};


#endif