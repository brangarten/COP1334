#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    double price = 8.00,                      // Cost of being made
           percentage = price * (35 / 100.0), // 35% of 8$
           profitPrice;


    // adding 35% of 8$ to the original price to find profit.
    profitPrice = price + percentage;

    cout << fixed << setprecision(2);
    cout << "Price for profit: $" << profitPrice;

    return 0;

}
