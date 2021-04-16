/*********************************************************************
** Program name: Project 3
** Author: Kimberly Tom
** Date: 5/13/18
** Description: The gamePlay class holds the gamePlay functions.
*********************************************************************/

#include "gamePlay.hpp"

// set user selected monsters
GamePlay::GamePlay(int character1, int character2) {

    // set 1st character
    if (character1 == 1) {
        Vampire *vamp1 = new Vampire;
        vamp1->setCharName("Blue Vampire");
        monster1 = vamp1;
    }

    else if (character1 == 2) {
        Barbarian *barb1 = new Barbarian;
        barb1->setCharName("Blue Barbarian");
        monster1 = barb1;
    }

    else if (character1 == 3) {
        BlueMen *men1 = new BlueMen;
        men1->setCharName("Blue Blue Men");
        monster1 = men1;
    }

    else if (character1 == 4) {
        Medusa *medusa1 = new Medusa;
        medusa1->setCharName("Blue Medusa");
        monster1 = medusa1;
    }

    else if (character1 == 5) {
        HarryPotter *harry1 = new HarryPotter;
        harry1->setCharName("Blue Harry Potter");
        monster1 = harry1;
    }

    // set 2nd character
    if (character2 == 1) {
        Vampire *vamp2 = new Vampire;
        vamp2->setCharName("Red Vampire");
        monster2 = vamp2;
    }

    else if (character2 == 2) {
        Barbarian *barb2 = new Barbarian;
        barb2->setCharName("Red Barbarian");
        monster2 = barb2;
    }

    else if (character2 == 3) {
        BlueMen *men2 = new BlueMen;
        men2->setCharName("Red Blue Men");
        monster2 = men2;
    }

    else if (character2 == 4) {
        Medusa *medusa2 = new Medusa;
        medusa2->setCharName("Red Medusa");
        monster2 = medusa2;
    }

    else if (character2 == 5) {
        HarryPotter *harry2 = new HarryPotter;
        harry2->setCharName("Red Harry Potter");
        monster2 = harry2;
    }
}

// deallocate memory
GamePlay::~GamePlay() {
    delete monster1;
    delete monster2;

}

// game play simulation
void GamePlay::simulation() {
    cout << endl;
    cout << monster1->getCharName() << " will be fighting " << monster2->getCharName() << endl;
    cout << endl;

    int roundCount = 1;

    // keep performing next round as long as both monsters have more than 0 strength points
    while (monster1->getStrengthPoints() > 0 && monster2->getStrengthPoints() > 0) {
        cout << "**Round " << roundCount << "**" << endl;
        monster1->attackMove(); // monster 1 attacks
        monster2->defenseMove(monster1->getAttack()); // monster 2 defends

        cout << endl;

        // if monster 2 still has more than 0 strength points, continue round
        if (monster2->getStrengthPoints() > 0) {
            monster2->attackMove(); // monster 2 attacks
            monster1->defenseMove(monster2->getAttack()); // monster 1 defends

            cout << endl;
        }

        roundCount++; // increment round
    }

    // if monster 1 has 0 strength points or less, monster 1 has died
    if (monster1->getStrengthPoints() <= 0) {
        cout << monster1->getCharName() << " has lost" << endl;
        cout << monster2->getCharName() << " wins the game" << endl;
        cout << endl;
    }

    // if monster 2 has 0 strength points or less, monster 2 has died
    if (monster2->getStrengthPoints() <= 0) {
        cout << monster2->getCharName() << " has lost" << endl;
        cout << monster1->getCharName() << " wins the game" << endl;
        cout << endl;
    }

    startMenu(); // show start menu again
}

