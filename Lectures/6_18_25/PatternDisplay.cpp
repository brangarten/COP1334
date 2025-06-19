#include <iostream>
#include <string>

using namespace std;

int main() {
    int length;

    cout << "Enter length: ";
    cin >> length;

    cout << "Pattern A";
    for (int i = 1; i <= length; i++) {
        cout << string(i, '+') << endl;
    }

    cout << "\nPattern B \n";
    for (int i = length; i >= 1; i--) {
        cout << string(i, '+') << endl;
    }
}