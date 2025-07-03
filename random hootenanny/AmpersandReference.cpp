#include <iostream>
#include <string>
#include <vector>

using namespace std;

void logMessage(const string& message, const string& level);
void getNums(int&, int&);
void getNums(int&, int&, int&);

int main() {

    // My name is Brandon, but my nickname is nano.
    string brandon  { "Brandon" };
    string& nano    { brandon };

    int birthDate = 42406;

    cout << "Hello! My name is " << nano;

    // If I change the value from my nickname it will also change my name
    nano = "John";
    cout << "\nHello... My name is " << brandon;

    // Once you assign a reference var to an object it's FOREVER going to reference that variable.
    nano = "Nina";
    cout << "\nI changed my name again..."  << brandon;

    // You can also use the Ampersand symbol to refer to a variables address
    // I'm storing my birthDate's variable address into pointer variable branDress
    // You can access the address by using *
    int* branDress = &birthDate;
    cout << "\nMy birthDate variable address is " << &birthDate;
    cout << "\nMy branDress variable address is " << branDress;
    cout << "\nMy birth date is "    << *branDress; 

    // It doesn't matter what type it is :3
    // I'm storing my variable brandon into pointer variable nanoPoint
    string* nanoPoint = &brandon;
    cout << "\nMy name address is " << nanoPoint;

    // Using pointers you can also change values and reassign references
    string* namePointer = &nano;

    // Changing nano/brandon value
    // You have to use the * symbol to dereffernce namePointer in this instance to change the value it's pointing to (nano)
    *namePointer = "Kitty"; 

    cout << "\nAgain... my name is " << brandon;

    // Reassigning to brandon instead of nano
    namePointer = &brandon;
    *namePointer = "INQUISITIVE KITTY";

    cout << "\nFor the LAST TIME my name is " << nano;

    cout << endl;

    return 0;

}