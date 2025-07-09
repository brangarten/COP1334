#include <iostream>
#include <string>
#include <map>

using namespace std;

void quit(int&);
void checkValidInput(int&);

int main() {

    // Setup map
    map<int, char> romanNumeral;
    romanNumeral.insert(pair<int, char>(1,  'I'));
    romanNumeral.insert(pair<int, char>(5,  'V'));
    romanNumeral.insert(pair<int, char>(10, 'X'));

    int userInput;

    cout << romanNumeral[10];

    while(true) {
        // Prompt user for input
        cout << "> ";
        cin  >> userInput;

        // Checks to if userInput is valid
        checkValidInput(userInput);

    }      
}

void quit(int& userInput) {
    if (userInput == 0) {
        exit(0);
    }
}

void checkValidInput(int& userInput) {
    while(true) {
        quit(userInput);
        if (userInput < 0 || userInput > 20) {
            cout << "Invalid Input. Try again \n> ";
            cin  >> userInput;
        }
        else {
            break;
        }
    }
}

