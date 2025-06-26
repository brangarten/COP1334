#include <iostream>

using namespace std;

bool isPrime(int x);

int main() {

    cout << isPrime(25);
    cout << isPrime(5);
    cout << isPrime(1);

    return 0;
}

bool isPrime(int x) {
    
    int count;

    // Itterate 1-X
    for (int i = 1; i <= x; i++) {
        // x mod i and if it is 0 then it is a multiple (count++ to keep track of how many multiples)
        if (x % i == 0) {
            count++;
        }
    }

    // if there are more than 2 multiples then it is NOT prime
    if (count > 2) {
        return false;
    } else {
        return true;
    }
}