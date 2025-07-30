#include <iostream>

using namespace std;

int main() {

    int vals[] = {3, 4, 1};
    int* valsPtr = vals;

    cout << vals << endl;

    cout << vals[0] << ' ' << &vals[0] << endl;
    cout << vals[1] << ' ' << &vals[1] << endl;
    cout << vals[2] << ' ' << &vals[2] << endl;

    cout << endl << *(valsPtr+0) << ' ' << (valsPtr+0) << endl;
    cout << *(valsPtr+1) << ' ' << (valsPtr+1) << endl;
    cout << *(valsPtr+2) << ' ' << (valsPtr+2) << endl;

    return 0;
}