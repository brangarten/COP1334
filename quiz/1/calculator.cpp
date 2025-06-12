#include <iostream>
#include <vector>
#define loopArg int i = 0; i < nums.size(); ++i
#define loopArgQuot int i = 1; i < nums.size(); ++i


using namespace std;

int main() {
    
    while(true) {
        char selection;
        short arrSize,
              num;

        int finalValue;
            
        vector<int> nums;

        cout << "\tCalculator \n";
        cout << "1. Addition"       << endl
             << "2. Subtraction"    << endl
             << "3. Multiplication" << endl
             << "4. Division"       << endl
             << "q to quit"         << endl 
             << endl;

        cout << "Enter arithmetic operation to perform (1-4 || q) \n> ";
        cin >> selection;
        if (selection == 'q') terminate();
        
        // Set fixed size for how many nums to be in the array
        cout << "How many numbers? \n> ";
        cin >> arrSize;

        cout << endl << "Enter numbers:";

        // Insert nums till it reaches fixed Size user inputted into arrSize
        for(int i = 0; i < arrSize; ++i) {
            cin >> num;
            nums.push_back(num);
        }



/*
        cout << endl << "Enter two numbers: \n> ";
        cin >> num2;
        cin >> num1;
*/
        cout << endl;
        


        switch(selection) {
            case '1':
                // loopArg just itterates through entire array of nums
                // and for each element in an array gets assignment with the specific operator
                for(loopArg) {
                    finalValue += nums[i];
                }
                cout << "Sum: " << finalValue << endl;
                break;
            case '2':
                for(loopArg) {
                    finalValue -= nums[i];
                }
                cout << "Difference: " << finalValue << endl;
                break;
            case '3':
                finalValue = 1; // so it wont be multiplied by 0
                for(loopArg) {
                    finalValue *= nums[i];
                }
                cout << "Product: " << finalValue << endl;
                break;
            case '4':
                finalValue = nums[0];
                for(loopArgQuot) {
                    finalValue /= nums[i];
                }
                cout << "Quotient: " << finalValue << endl;
                break;
            case 'q':
                terminate();
            default:
                cout << "Invalid option";
        }

        /* THIS WAS MY OLD CALCULATOR
        i had defines for the keywords add, diff, prod, and quot for its specific operator
        
        switch(selection) {
            case '1':
                cout << "Sum: " << num1 add num2
                     << endl;
                break;
            case '2':
                cout << "Difference: " << num2 diff num1
                     << endl;
                break;
            case '3':
                cout << "Product: " <<  num1 prod num2
                     << endl;
                break;
            case '4':
                cout << "Quotient: " << num2 quot num1
                     << endl;
                break;
            case 'q':
                terminate();
            default:
                cout << "Invalid option";
        }
    */

    }

    return 0;

}