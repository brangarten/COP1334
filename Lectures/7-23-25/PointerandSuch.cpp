#include <iostream>

using namespace std;

int main() {

    int firstVal = 123;
    int secondVal = 456;

    int* valPtr = &firstVal;
    int& otherPtr = secondVal;

    cout << "ValPtr \n";
    cout << *valPtr << endl;
    cout << "Address: " << hex << valPtr;

    cout << endl;

    // Dereference valPtr & assign it to secondVal
    valPtr = &secondVal;
    cout << dec << *valPtr << endl;
    cout << "Address: " << hex << valPtr;

    cout << endl << dec;

    cout << endl << "otherPtr \n";
    cout << otherPtr << endl;

    otherPtr = 4;
    cout << otherPtr << endl;
    cout << &otherPtr << endl;
 

    return 0;
}