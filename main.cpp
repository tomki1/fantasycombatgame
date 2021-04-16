/*********************************************************************
** Program name: Project 3
** Author: Kimberly Tom
** Date: 5/13/18
** Description: This program runs a Fantasy Combat Game where a user can select two characters to battle.
 * A series of dice rolls will determine the attack and defense for characters during each round and once a character
 * has no more strength points, that character loses the game.
*********************************************************************/

#include <iostream>
#include<cstdlib>
#include<ctime>
#include<sstream>

#include"menu.hpp"

using std::string;
using std::stringstream;
using std::cout;
using std::cin;
using std::endl;

int main() {
    srand(time(NULL)); // used to set time for die rolls

    startMenu(); // show start menu

    return 0;
}