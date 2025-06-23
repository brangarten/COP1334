#include <iostream>
#include <iomanip>
#include <math.h>


using namespace std;

// i never finished this shit
// fuck this

/* 
The annual rate of inflation is the rate at which money loses its value. 
For example, if the annual rate of inflation is 3.0 percent, then in one year 
it will cost $1,030 to buy the goods that could have been purchased for $1,000 today. 
Put another way, a year from now $1,000 will only buy 1/1.03 * $1,000, or $970.87, worth of goods. 
Two years from now, $1,000 will only buy only 1/1.03 of $970.87, or $942.59 worth of goods. 
Write a program that allows the user to enter an annual rate of inflation between 1 percent and 10 percent, 
and which then displays a table showing how much $1,000 today will be worth each year for the next 10 years.
 */

int main() {

    double roi, price, value;

    cout << "Rate of Inflation: \n> ";
    cin >> roi;

    roi = roi / 100.00;
    roi += 1;

    cout << endl << "Value: \n> $";
    cin >> price;

    //value = (1/roi) * price;

    cout << endl;
    cout << fixed << setprecision(2);
    //cout << endl << value << endl; 

    for (int y = 1; y <= 10; y++) {

        value += (1/roi) * price;
        cout << value << endl;

    }


    return 0;
}