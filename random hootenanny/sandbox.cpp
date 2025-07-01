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

    float value1, value2;
    char operation, list [5] = {'*', '/', '%', '+', '-'};

    // Check number of elements in _list
    //cout << sizeof(_list) / sizeof(_list[0]);

    cout << "Enter two values \n> ";
    cin >> value1 >> value2;

    cout << "\nEnter operation (*, /, %, +, -) \n> ";

    // Loop until variable operation has a valid input

    // This was so unnecessary...
    // So I have a while loop that checks every user inputs and validates it.
    // To be honest I probably could've done it like this -> 
    // while true
    // if (operation == '+' || operation == '-' || operation == '/' || operation == '*') then break
    
    /*
    while(true) {

        cin >> operation;
        if(searchValue(list, 5, operation) != true) {
            cout << "Invalid Operation, Try again. \n";
        }
        else {
            break;
        }
    }
    */

    // In summary this is better than to search into an array.

    while(true) {
        cin >> operation;
    
        if (operation == '+' || operation == '-' || operation == '/' || operation == '*' || operation == '%') {
            break;
        }
    
        cout << "Invalid Operator, try again. \n> ";
   }

    cout << endl;
    //cout << operation << endl;

    // Operation being done on values
    switch(operation) {
    case '*':
        cout << "Result: " << value1 * value2;
    case '/':
        cout << "Result: " << value1 / value2;
    case '%':
        cout << "Result: " << (int)value1 % (int)value2;
    case '+':
        cout << "Result: " << value1 + value2;
    case '-':
        cout << "Result: " << value1 - value2;
    }

    return 0;
}
