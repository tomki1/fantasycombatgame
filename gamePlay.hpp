/*********************************************************************
** Program name: Project 3
** Author: Kimberly Tom
** Date: 5/13/18
** Description: The header file for gamePlay.cpp.
*********************************************************************/

#ifndef CS162PROJECT3_GAMEPLAY_HPP
#define CS162PROJECT3_GAMEPLAY_HPP

#include"inputValidation.hpp"
#include"menu.hpp"
#include"character.hpp"
#include"vampire.hpp"
#include"barbarian.hpp"
#include"blueMen.hpp"
#include"medusa.hpp"
#include"harryPotter.hpp"

class GamePlay {

private:
    Character *monster1 = NULL; // character object for the first monster
    Character *monster2 = NULL; // character object for the second monster

public:
    GamePlay(int character1, int character2); // constructor
    ~GamePlay(); // destructor
    void simulation(); // function that will play out the simulation



};


#endif