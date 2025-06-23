#include <iostream>

using namespace std;

void deep();
void deeper();
void showSum(int num1, int num2, int num3);
int showSum2(int num1, int num2, int num3);


int main() {
    cout << "Main function\n";
/*  deep();
    deeper(); */

    showSum(2, 3, 5);
    showSum2(2, 3, 5);


    return 0;
}

void deep() {
    cout << "This is the deep function\n";
    deeper();
    cout << "I am back inside the deep function\n";

}

void deeper() {
    cout << "This is the deeper function\n";
}

void showSum(int num1, int num2, int num3) {
    cout << "Sum is " << num1 + num2 + num3;
}

int showSum2(int num1, int num2, int num3) {
    //cout << "Sum is " << num1 + num2 + num3;
    return num1 + num2 + num3;
}