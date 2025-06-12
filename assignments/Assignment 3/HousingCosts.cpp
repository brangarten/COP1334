#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    // Vars to store expenses
    float rentBill,
          cableBill,
          phoneBill,
          internetBill,
          monthlyCost,
          yearlyCost;

    cout << "Enter expenses per month" << endl;

    // Extract user input into variables
    cout << endl << "Rent/Mortgage bill\n> ";
    cin >> rentBill;

    cout << endl << "Cable bill\n> ";
    cin >> cableBill;

    cout << endl << "Phone bill\n> ";
    cin >> phoneBill;

    cout << endl << "Internet bill\n> ";
    cin >> internetBill;

    // Calculate monthly by adding all expenses
    monthlyCost = rentBill + cableBill + phoneBill + internetBill;

    // Calculate yearly by multiplying monthly by 12 to give yearly product
    yearlyCost  = (monthlyCost * 12);

    // Set to two decimal points
    cout << fixed << setprecision(2);

    // Output expenses
    cout << endl << "Monthly Expenses: $" << monthlyCost;
    cout << endl << "Yearly Expenses: $" << yearlyCost;

    return 0;
}
