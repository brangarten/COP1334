// Learning Reference variables

#include <iostream>

using namespace std;

void getNums(int&, int&);
void orderNums(int&, int&);


int main() {

    int yin, yang;

    getNums(yin, yang);
    orderNums(yin, yang);

    

    cout << yin << ' ' << yang;
//    getNumber();

    return 0;
}

void getNums(int &input1, int &input2) {
    cout << "Enter first input \n> ";
    cin >> input1;

    system("cls");

    cout << "Enter second input \n> ";
    cin >> input2;
}

void orderNums(int &num1, int &num2) {
    int temp;

    if (num1 > num2) {
        temp = num2;
        num2 = num1;
        num1 = temp;
    } else {
        cout << "Everything is fine :33";
    }
}