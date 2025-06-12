#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    // Vars for tickets sold per class & total
    int _ClassASold,
        _ClassBSold,
        _ClassCSold,
        total;

    cout << "How many seats were sold?" << endl;

    // Extract variables into user input
    cout << "\nClass A \n> ";
    cin  >> _ClassASold;

    cout << "\nClass B \n> ";
    cin  >> _ClassASold;

    cout << "\nClass C \n> ";
    cin  >> _ClassASold;

    // Multiply assignment (userVal * classPrice)
    _ClassASold *= 15;
    _ClassBSold *= 12;
    _ClassCSold *= 9;

    // Find the sum of total by adding all classes together
    total = _ClassASold + _ClassBSold + _ClassCSold;

    // Set to two decimal points
    cout << fixed << setprecision(2);
    cout << endl << "The total amount of income earned from tickets sold is $" << (float)total << endl; //Type casted into float

    return 0;
}
