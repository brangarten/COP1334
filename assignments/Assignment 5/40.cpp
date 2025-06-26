#include <iostream>

using namespace std;

int biggest(int num1, int num2, int num3);

int main() {

    cout << biggest(5, 3, 1);
}

int biggest(int num1, int num2, int num3) {
    int arr[3] = {num1, num2, num3};    // Set nums into array

    int temp;

    // Bubble Sort
    for (int i = 0; i < 3; i++) {
        for (int j = i+1; j < 3; j++) {
            if (arr[i] > arr[j]) { // If i is > j then swap
                temp = arr[j];
                
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }

    return arr[2]; // Return the last element which is the largest number after the sort
}