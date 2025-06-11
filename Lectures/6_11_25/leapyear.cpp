#include <iostream> 

#define firstStatement       year % 4 == 0 && year % 100 != 0
#define secondStatement      year % 100 == 0 && year % 400 == 0
#define firstBreakStatement  secYear % 4 == 0 && secYear % 100 != 0
#define secondBreakStatement secYear % 100 == 0 && secYear % 400 == 0
using namespace std;

int main() {

    // is a leap year if its remainder divided by 4 is 0
    // however not if its divisible by 100 remainder
    // but if its divisible by 400 remainder 0 it is a leap year

    short int year;
    short int diff;

    cout << "Enter year \n> ";
    cin >> year;
    
    short int secYear = year;

    if (firstStatement) {
        cout << "leap year" << endl;
        return 1;

    } else if (secondStatement) {
        cout << "leap year!" << endl;
        return 2;
    } else {
        cout << "Not a leap year \n";

        while(!firstStatement || !secondStatement){
            secYear++;
            if (firstBreakStatement || secondBreakStatement) {
                break;
            }
        }

        diff = secYear - year;
        year += diff;

        return -1;
    }

    return 0;
}