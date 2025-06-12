#include <iomanip>
#include <iostream>

using namespace std;

int main() {

    int participants = 16500;
    double fifteenPercent = (15 / 100.0),               // 15%
           fiftyTwoPercent = (52 / 100.0),              // 52%
           resultOne = participants * fifteenPercent,   // Get the approximate number of people who buy energy drinks
           resultTwo = resultOne * fiftyTwoPercent;     // from the people who buy energy drinks, how many people get citrus flavor

    // For precision (whole)
    cout << fixed << setprecision(0);
    cout << resultOne << endl
         << resultTwo;

    return 0;
}
