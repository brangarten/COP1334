#include <iostream>

using namespace std;

int main() {

    int x = 105;
    int y = 54;

    cout << "x value: " << x << endl
         << "x address: " << hex << &x;

    cout << endl;

    cout << "y value: " << dec << y << endl
         << "y address: " << hex << &y;
}