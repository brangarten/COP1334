#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <array>

using namespace std;

void randomDigits (int*, int = 5);
void printDigits  (int*, int = 5);
void printDigits  (int*, int*, int = 5);
void getDigits    (int*, int = 5);
void compareDigits(int*, int*, int = 5);

int main() { 

    // Initialize Seed
    srand(time(NULL));

    int winningDigits[5],
        player[5],
        count = 0,    
        temp;

    // Generate Random numbers for winningDigits
    randomDigits(winningDigits);

    // Recieve input from user and insert it into player
    getDigits(player);

    // Compare the two arrays
    compareDigits(winningDigits, player);

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

// Prints 2 arrays
void printDigits(int* array1, int* array2, int iterations) {
    cout << "First set: ";
    for (int i = 0; i < iterations; i++) {
        cout << array1[i];
    }

    cout << endl << "Second set: ";
    for (int i = 0; i < iterations; i++) {
        cout << array2[i];
    }
}


void getDigits(int* array, int limit) {
    int count = 0; // Track how many iterations
    int temp;      // Store values here temporarily

    cout << "Enter " << limit << " Numbers: \n";
    do{
        // Extract number into temp
        cout << "> ";
        cin >> temp;

        // In array index insert temp
        array[count] = temp;
        count++; // Increment count

    
    } while (count < limit); // Run loop till count is less than limit
}

void compareDigits(int* arr1, int* arr2, int iterations) {
    int count = 0;
    
    // Iterate through size of array
    for(int i = 0; i < iterations; i++) {
           if (arr1[i] == arr2[i]) { // If in both indexes the values are the same then it is a matching digit
            count++;                 // Increment count
           } 
    }
    
    // Print both arrays
    printDigits(arr1, arr2);
    cout << endl << "There are " << count << " matching digits";
}