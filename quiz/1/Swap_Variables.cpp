#include <iostream>

using namespace std;

int main() {

    short a, b, temp;

    cout << "Enter two numbers \n> ";
    cin >> a;
    cin >> b;

    cout << endl << "Vars: " << a << ' ' << b;

    temp = b;
    b = a;
    a = temp;

    cout << endl << "Vars (Swapped): " << a << ' ' << b;


    return 0;
}