#include <iostream>
#include <string>

using namespace std;

bool getNum(int&);



int main() {

    int x;


    cout << "Enter a num 1-100 \n";
    cin >> x;
    
    getNum(x);

    return 0;
}

// Using reference variable to manipulate variables
bool getNum(int &x) {

    while(true) {
        // if it is in range of 1-100 then break out of loop
        if (1 <= x && x <= 100) {
            break;
        } else {
            // Grab x and check to see if its in range
            cout << "Invalid try again 1-100 \n> ";
            cin >> x;
        }
    }

    return true;
}