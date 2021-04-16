/*********************************************************************
** Program name: Project 3
** Author: Kimberly Tom
** Date: 5/13/18
** Description: The header file for blueMen.cpp.
*********************************************************************/

#ifndef CS162PROJECT3_BLUEMEN_HPP
#define CS162PROJECT3_BLUEMEN_HPP

#include"character.hpp"

class BlueMen: public Character { // derived class of the character class

private:
public:
    BlueMen(); // default constructor
    ~BlueMen(); // destructor
    int attackMove(); // attack function
    int defenseMove(int damageTaken); // defense function
};


#endif