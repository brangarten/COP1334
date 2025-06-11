#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int malesRegistered, femalesRegistered, total;

    cout << "How many males are registered? \n> ";
    cin >> malesRegistered;

    cout << "\nHow many females are registered? \n> ";
    cin >> femalesRegistered;

    total = malesRegistered + femalesRegistered;

    /*
    float malesPercentage = total * (malesRegistered / 100.0),
        femalesPercentage = total * (femalesRegistered / 100.0);
    */

    float malesPercentage = malesRegistered / (float)total * 100.0,
        femalesPercentage = femalesRegistered / (float)total * 100.0;
    
    cout << fixed << setprecision(2);
    cout << "\nMale Percentage: " << malesPercentage << endl 
         << "Female Percentage: " << femalesPercentage << endl
         << "Total Percentage: " << malesPercentage + femalesPercentage;

    return 0;
    
    
}