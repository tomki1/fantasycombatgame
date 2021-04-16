/*********************************************************************
** Program name: Project 3
** Author: Kimberly Tom
** Date: 5/13/18
** Description: The header file for vampire.hpp.
*********************************************************************/

#ifndef CS162PROJECT3_VAMPIRE_HPP
#define CS162PROJECT3_VAMPIRE_HPP

#include"character.hpp"

class Vampire: public Character { // derived class of the character class

private:
public:
    Vampire(); // default constructor
    ~Vampire(); // destructor
    int attackMove(); // attack function
    int defenseMove(int damageTaken); // defense function
};


#endif