#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {

    // Setup map
    map<int, char> romanNumeral;
    romanNumeral.insert(pair<int, char>(1,  'I'));
    romanNumeral.insert(pair<int, char>(5,  'V'));
    romanNumeral.insert(pair<int, char>(10, 'X'));

    int userInput;

    while(true) {
        // Prompt user for input
        cout << "> ";
        cin  >> userInput;

        if (userInput == 0) {
            terminate();
        }

        // Checks if user inputted a number out of range
        while(true) {
            if (0 < userInput || userInput > 20) {
                cout << "Invalid Input. Try again \n> ";
                cin  >> userInput;
            }
            else {
                break;
            }
        }

        if (1 <= userInput && userInput >= 20) {

        }
    }
}

