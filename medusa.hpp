/*********************************************************************
** Program name: Project 3
** Author: Kimberly Tom
** Date: 5/13/18
** Description: The header file for medusa.cpp.
*********************************************************************/

#ifndef CS162PROJECT3_MEDUSA_HPP
#define CS162PROJECT3_MEDUSA_HPP

#include"character.hpp"

class Medusa: public Character { // derived class of the character class

private:

public:
    Medusa(); // default constructor
    ~Medusa(); // destructor
    int attackMove(); // attack function
    int defenseMove(int damageTaken); // defense function
};


#endif