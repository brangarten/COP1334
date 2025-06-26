#include <iostream>

using namespace std;

bool isPrime(int num);

int main() {

    cout << isPrime(5);
    cout << isPrime(2);
    cout << isPrime(9);

    return 0;
}

bool isPrime(int num) {
    
    if (num % 2 == 0 && num % 3 == 0) {
        return false;
    }

    return true;
}