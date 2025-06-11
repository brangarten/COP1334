#include <iostream>
#include <array>

using namespace std;

int main() {
    // Create random array.
    // use bubble sort (o^2)
    // using two for loops {i, j} i will be node 1 and j will be adjacent to i.
    // when i is greater than j swap and continue and complete when array is finished

    int temp;
    array<int, 5> myArr {4, 2, 5, 8, 3};

    //cout << myArr.at(2) << endl; 
    //cout << myArr.at(2);


    for(int i = 0; i < myArr.size(); ++i) {
        for(int j = i+1; i < myArr.size(); ++j) {
            if (myArr.at(i) < myArr.at(j)) {
                temp = j;
                myArr[j] = i;
                myArr[i] = temp;
            }
            else {
                i++;
            }
        }
    }

    for (int i = 0; i <myArr.size(); i++) {
        cout << myArr[i] << endl;
    }

    return 0;
}