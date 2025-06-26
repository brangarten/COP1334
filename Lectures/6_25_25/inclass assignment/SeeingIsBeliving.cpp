#include <iostream>

using namespace std;

void brokenSwap(int, int);
void realSwap(int&, int&);
void printNum(int, int);

int main() { 

    int x = 10,
        y = 20;

    cout << "Initialized x & y" << endl;
    printNum(x, y);
    cout << endl;
    
    cout << "Broken Swap" << endl;
    brokenSwap(x, y);
    cout << endl;


    cout << "After Broken Swap" << endl;
    printNum(x, y);
    cout << endl;


    cout << "Real Swap" << endl;
    realSwap(x, y);
    cout << endl;

    cout << "After Real Swap" << endl;
    printNum(x, y);

    return 0;
}

void brokenSwap(int a, int b) {
    int temp = b;
    b = a;
    a = temp;

    cout << "a: " << a << endl
         << "b: " << b << endl;
}

void realSwap(int &a, int &b) {
    int temp = b;
    b = a;
    a = temp;

    cout << "a: " << a << endl
         << "b: " << b << endl;
}

void printNum(int x, int y) {

    cout << "x: " << x << endl
         << "y: " << y << endl;

}