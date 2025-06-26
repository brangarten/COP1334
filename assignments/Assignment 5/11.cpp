#include <iostream>

using namespace std;

bool isPrime(int x);

int main() {

    int x = 5;

    cout << isPrime(25);
    cout << isPrime(5);
    cout << isPrime(1);

    return 0;
}

bool isPrime(int x) {
    
    int count;
    // Itterate 1-X
    for (int i = 1; i <= x; i++) {
        if (x % i == 0) {
            count++;
        }
    }

    if (count > 2) {
        return false;
    } else {
        return true;
    }
}