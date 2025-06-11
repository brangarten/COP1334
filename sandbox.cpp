#include <iostream>

using namespace std;

// Function where it takes _list, the size of array, and
// value its searching for in _list (list of operations)
bool searchValue(char arr[], int size, char value) {
    for(int i = 0; i < size; i++) {
        if(arr[i] == value) {
            return true;
        }
        else {
            return false;
        }
    }
}

int main() {

    float _Value1, _Value2;
    char operation, _list [5] = {'*', '/', '%', '+', '-'};

    // Check number of elements in _list
    //cout << sizeof(_list) / sizeof(_list[0]);

    cout << "Enter two values \n> ";
    cin >> _Value1 >> _Value2;

    cout << "\nEnter operation (*, /, %, +, -) \n> ";

    // Loop until variable operation has a valid input
    while(true) {

        cin >> operation;
        if(searchValue(_list, 5, operation) != true) {
            cout << "Invalid Operation, Try again. \n";
        }
        else {
            break;
        }
    }


    cout << endl;
    //cout << operation << endl;

    // Operation being done on values
    switch(operation) {
    case '*':
        cout << "Result: " << _Value1 * _Value2;
    case '/':
        cout << "Result: " << _Value1 / _Value2;
    case '%':
        cout << "Result: " << (int)_Value1 % (int)_Value2;
    case '+':
        cout << "Result: " << _Value1 + _Value2;
    case '-':
        cout << "Result: " << _Value1 - _Value2;
    }

    return 0;
}
