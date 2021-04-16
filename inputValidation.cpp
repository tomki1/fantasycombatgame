/*********************************************************************
** Program name: Project 3
** Author: Kimberly Tom
** Date: 5/13/18
** Description: The inputValidation class holds the functions to check if user's input is valid.
*********************************************************************/

#include "inputValidation.hpp"

// input validation for start menu
int validateStart() {
    bool errFlag = false;
    string input;
    int validInteger;
    do {
        getline(cin, input);
        stringstream sStream(input);

        if (sStream >> validInteger && !(sStream >> input))
        {

            if (validInteger != 1 && validInteger != 2)
            {
                cout << "Please enter 1 or 2" << endl;
            }
            else
            {
                errFlag = true;
            }
        }
        else
        {
            cout << "Please enter 1 0r 2" << endl;
        }

    } while (errFlag == false);
    return validInteger;
}

// input validation for character selection
int validate() {

    bool errFlag = false;
    string input;
    int validInteger;
    do {
        getline(cin, input);
        stringstream sStream(input);

        if (sStream >> validInteger && !(sStream >> input))
        {

            if (validInteger < 1 || validInteger > 5)
            {
                cout << "Please enter an integer between 1 and 5" << endl;
            }
            else
            {
                errFlag = true;
            }
        }
        else
        {
            cout << "Please enter an integer between 1 and 5" << endl;
        }

    } while (errFlag == false);
    return validInteger;
}