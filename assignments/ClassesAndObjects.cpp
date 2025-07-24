#include <iostream>
#include <vector>
#include <ctime>
using namespace std;

// class
class Bank {
private:
    /*   The reason why these variables are declared as private is because we don't want to give access outside of Bank.
       This practice is called encapsulation.
        
        Using char is good, however there is a limit struct onto how long char will be.
       In char name[30] it has a fixed length of 30, so if someone has a name longer than 30
       characters it would be impossible to use this.
    */

    // To avoid this issue we'll use std::string instead of char
    int acno;
    std::string name;
    long balance;


public:
    void OpenAccount()
    {
        cout << "Enter Account Number: ";
        cin >> acno;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter  Balance: ";
        cin >> balance;
    }
    void ShowAccount()
    {
        cout << "Account Number: " << acno << endl;
        cout << "Name: " << name << endl;
        cout << "Balance: " << balance << endl;
    }
    void Deposit()
    {
        // Grab current time
        time_t now = time(0);
        char* dt = ctime(&now);

        long amt;
        cout << "Enter Amount U want to deposit? ";
        cin >> amt;
        balance = balance + amt;
        transactions.push_back(Transaction(amt, dt, "Deposit"));
    }
    void Withdrawal()
    {
        // Grab current time
        time_t now = time(0);
        char* dt = ctime(&now);

        long amt;
        cout << "Enter Amount U want to withdraw? ";
        cin >> amt;

        while(true) {
            if (amt > balance) {
                cout << "Invalid Input. You're withdrawing more than you have, try again \n> ";
                cin  >> amt;
            } else
                break;
        }
        if (amt <= balance) {
            balance = balance - amt;
            transactions.push_back(Transaction(amt, dt, "Withdrawal"));
        }
    }
    int Search(int);

    class Transaction {
        private:
            long amount;
            std::string timeStamp,
                        transactionType;

        public:
            Transaction(long amount, std::string timeStamp, std::string trasactionType) {
                this->amount          = amount;
                this->timeStamp       = timeStamp;
                this->transactionType = transactionType;
            }

            void displayTransaction() {
                std::cout << "Amount: "           << amount << endl;
                std::cout << "Time Stamp: "       << timeStamp << endl;
                std::cout << "Transaction Type: " << transactionType << endl;
        }
    };

    private:
        vector<Transaction> transactions;
};

int Bank::Search(int a)
{
    bool confirm;

    // This checks to see if the account is found
    if (acno == a) {
        // Alerts user that account was found and if they would like to show more information about the account
        cout << "Account found! Would you like to display more information? (1/0) \n> ";

        // Take in user input into confirm
        cin  >> confirm;

        // if user entered 1 then show account
        if(confirm == true) {
            ShowAccount();
        }

        // otherwise return 1 to signal there was an account found
        return (1);
    }

    // No accounts were found
    return (0);
}

// main code
int main()
{
    // Creating array for 3 users
    Bank C[3];

    int found = 0, a, ch, i;
    for (i = 0; i <= 2; i++) {
        // Opening accounts for the 3 users
        // Cycling through with a for loop
        C[i].OpenAccount();
    }

    do {
        // display options
        cout << "\n\n1:Display All\n2:By Account No\n3:Deposit\n4:Withdraw\n5:Exit" << endl;

        // user input
        cout << "Please input your choice: ";
        cin >> ch;

        switch (ch) {
        case 1: // displating account info
            for (i = 0; i <= 2; i++) {
                C[i].ShowAccount();
            }
            break;
        case 2: // searching the record
            cout << "Account Number? ";
            cin >> a;
            for (i = 0; i <= 2; i++) {
                found = C[i].Search(a);
                if (found)
                    break;
            }
            if (!found)
                cout << "Record Not Found" << endl;
            break;
        case 3: // deposit operation
            cout << "Account Number To Deposit Amount? ";
            cin >> a;
            for (i = 0; i <= 2; i++) {
                found = C[i].Search(a);
                if (found) {
                    C[i].Deposit();
                    break;
                }
            }
            if (!found)
                cout << "Record Not Found" << endl;
            break;
        case 4: // withdraw operation
            cout << "Account Number To Withdraw Amount? ";
            cin >> a;
            for (i = 0; i <= 2; i++) {
                found = C[i].Search(a);
                if (found) {
                    C[i].Withdrawal();
                    break;
                }
            }
            if (!found)
                cout << "Record Not Found" << endl;
            break;
        case 5: // exit
            cout << "Have a nice day" << endl;
            break;
        default:
            cout << "Wrong Option" << endl;
        }
    } while (ch != 5);
    return 0;
}

// 5. I'd create functions to handle user interface within the main function
//    and handle Business Logic in their respected classes without cin or couting anything.
//    This would require pointers to be used.

// 6. The disadvantages of using a fixed-size array, basically put, THE SIZE IS FIXED.
//    I'd have to either 1 make the fixed size larger or make it dynamic [] <- no size set.
//    I wouldn't do that though, instead I'd use a vector to dynamically store users.
//    the logic follows: vector<Bank> C;
//    and depending on the size I'd create a for loop iterating until it's finished.
//    Vectors are safer too can store as many elements as it wants :)

// 9. A Const Member Functions is just a function that is read only and cannot write to other variables during its call.
//    Methods in the Bank class that should be const would be search, and ShowAccount
//    int Search(int a) const
//    void ShowAccount() const

// 10. Bank would be the outer class and customer would be the inner class within Bank.
//     Customers would have bank classes extended inside them and those variables will point to the bank variables.
//     There will be constructors in both customers and bank to make things more organized.