#include <iostream>

using namespace std;

int timesTen(int n) {
    return n * 10;
}

int main() {

    cout << "The product of 5 by 10 is " << timesTen(5) << endl;
    cout << "The product of 3 by 10 is " << timesTen(3) << endl;
    cout << "The product of 7 by 10 is " << timesTen(7) << endl;

    return 0;
}