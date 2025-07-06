#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <array>

using namespace std;

void randomDigits(int*, int = 5);
void printDigits(int*, int = 5);

int main() { 

    // Initialize Seed
    srand(time(NULL));

    int winningDigits[5];
    int player[5];

    randomDigits(winningDigits);
    printDigits(winningDigits);



    cout << endl;

    return 0;
}

// Pass by Pointer & Numbers of iterations (by default 5)
void randomDigits(int* array, int iterations) {
    for (int i = 0; i < iterations; i++) {
        // % 9 gives the remainder 0-8
        // adding 1 to random shifts it to 1-9
        int randomInt = 1 + rand() % 9;

        // Dereferencing the array to assign it its respected index.
        array[i] = randomInt;
    }
}

// I tried to get sizeof array to determine how many iterations are needed, but there was an issue with that in this function.
// In this function the array is being passed by pointer, so when the array gets to the argument of printDigit it isn't the original array.
// It turns into a pointer (8 bytes), therefore trying to do sizeof(arr) / sizeof(arr[0]) is going to equal 2. 
// Note: one element is 4 bytes, so the whole pointer is 8 bytes divided by 4 bytes.
 void printDigits(int* array, int iterations) {
    for (int i = 0; i < iterations; i++) {
        cout << array[i];
    }
}