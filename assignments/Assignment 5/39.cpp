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

bool getNum(int &x) {

    while(true) {
        if (1 <= x && x <= 100) {
            break;
        } else {
            cout << "Invalid try again 1-100 \n> ";
            cin >> x;
        }
    }

    return true;
}