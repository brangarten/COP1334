#include <iostream>
#include <iomanip>

using namespace std;

void printMenu();
void getNum(int&, int&);
int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
double divide(double a, double b);


int main() {

    printMenu();

    return 0;
}

void printMenu() {

    while(true)
    {
        int choice, 
            a = 0, 
            b = 0;

        cout << '\n' << '\t' << " Simple Calculator" << endl;
        cout << "1. Add" << endl;
        cout << "2. Subtract" << endl;
        cout << "3. Multiply" << endl;
        cout << "4. Divide" << endl;
        cout << "5. Quit" << endl;
        cout << "> ";

        cin >> choice;

        switch(choice) {
            case 1:
                getNum(a, b);
                cout << "Addition: " << add(a, b) << endl;
                break;
            case 2:
                getNum(a, b);
                cout << "Difference: " << subtract(a, b) << endl;
                break;
            case 3:
                getNum(a, b);
                cout << "Product: " << multiply(a, b) << endl;
                break;
            case 4:
                getNum(a, b);
                cout << "Quotient: " << fixed << setprecision(3) << divide((double)a, (double)b) << endl;
                break;
            case 5:
                return;

    }
}

}

void getNum(int &a, int &b) {
    cout << "Enter two numbers \n1. ";
    cin >> a;

    cout << "2. ";
    cin >> b;

    cout << endl;
}

int add(int a, int b) {
    return a+b;
}

int subtract(int a, int b) {
    return a-b;
}

int multiply(int a, int b) {
    return a*b;
}

double divide(double a, double b) {
    
    
    if (a == 0.0) {
        cout << "Undefined " << setw(2);
        return 0;
    }

    return a / b;
}
