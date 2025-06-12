#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double percentage = 58 / 100.0,
           totalSales = 8.6,
           finalSales = totalSales * percentage;

    cout << fixed << setprecision(2);
    cout << "Sales: \n> $" << finalSales;

    return 0;
}
