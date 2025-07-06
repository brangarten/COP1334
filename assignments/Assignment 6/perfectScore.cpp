#include <iostream>

void perfectScore(const int& score, int& count);

using namespace std;

int main() {
    int scores[20],
        perfectCount = 0,
        score;


    cout << "Enter 20 Scores (0-100)";
    
    for(int i = 0; i < 20; i++) {
        // Prompt user for input
        cout << "> ";
        cin  >> score;

        while(true) {
            // If score is out of range then prompt user to input again.
            if (score < 0 || score > 100) {
                cout << "Invalid Input. Try again \n> ";
                cin  >> score;
            }
            else {
                break;
            }
        }

        // Safe checking if score is in range.
        if (0 <= score && score <= 100) {
            scores[i] = score;
            perfectScore(score, perfectCount); // Checks if it is a perfect score.
        }
    }

    cout << "There are " << perfectCount << " perfect scores."; 
}

// If a score is perfect then by reference increment 1
void perfectScore(const int& score, int& count) {
    if (score == 100) count++;
}