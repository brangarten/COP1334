#include <iostream>
#include <string>
#include <vector>
#include <windows.h>
#include <chrono>
#include <thread>

using namespace std;

/* Functions :P */
void Alert(const string &message, const string &level = "INFO");
void PrintMenu();
void DoubleEndl();
void ExitTune();

/*Silly Number to indicate NULL in a way */
int CurrentlySelected = -2;

/* Very cool console ASCII art */
const string AsciiArt = R"(
 ___            _     ___         _        _ 
| _ ) __ _ _ _ | |__ | _ \___ _ _| |_ __ _| |
| _ \/ _` | ' \| / / |  _/ _ \ '_|  _/ _` | |
|___/\__,_|_||_|_\_\ |_| \___/_|  \__\__,_|_|
)";


class Bank {
    private:
        int    account_number_;
        string account_holder_;
        double balance_;
    
    public:
        /* Creating Constructor */
        Bank(int account_number_, string account_holder_, double balance_) {
            this->account_number_ = account_number_;
            this->account_holder_ = account_holder_;
            this->balance_        = balance_;

            // Alert console account was created
            Alert("Account Created!\n");
        }


        /* Withdraw & Deposit into/from account */
        void Withdraw() {
            double amount;

            Alert("Withdrawal in progress...", "HIGH");

            Alert("How much would you like to withdraw?");
            cin  >> amount;

            // Enter while loop to check if amount is vaild
            while(true) {
                /* If the amount is greater than the Accounts balance enter an 
                   infinite loop till it is less than balance. */
                if (amount > balance_) {
                    Alert("The amount you're trying to withdraw exceeds your balance. Please try again."
                         ,"ERROR");
                    cin >> amount;
                } else {
                    break;
                }
            }

            // Subtract amount from balance_
            balance_ -= amount;
            Alert("Withdrawal Successful!");
        }

        void Deposit() {
            double amount;

            Alert("Deposit in progress...", "HIGH");

            Alert("How much would you like to deposit?");
            cout << "> ";
            cin  >> amount;

            // Add amount into balance_
            balance_ += amount;
            Alert("Deposit Successful!");
        }


        /* Prints Account Number, User Name, and Balance */
        void Display() {
            cout << endl;

            cout << "Account Number: "  << account_number_ << endl
                 << "Account Holder: "  << account_holder_ << endl
                 << "Account Balance: " << balance_        << endl;

            Alert("Account Information Displayed!");
        }

        string Name() {
            return account_holder_;
        } 
};


/* Pass by reference to add into our vector Accounts */
void CreateAccount(vector<Bank*>& list) {
    // Temporary Variables
    int a;
    string b;
    double c;

    while (true) {
        /* Extract values into temporary variables*/
        Alert("Creating account...");
        cout << "Enter Account Number: \n> ";
        cin  >> a;

        cout << "\nEnter Account Holder: \n> ";
        cin  >> b;

        cout << "\nEnter Initial Balance: \n> ";
        cin  >> c;

        break;
    }

    /* Using new to allocate memory into our heap. This is also done to not have
       a dangling pointer. Also, storing temporary variables into a new object */
    Bank* account = new Bank(a, b, c);
    list.push_back(account);
}

/* Global Variable for Accounts. This is done because I wanted functions to be
   able to access Accounts w/o the need of pointers being passed in a set of parentheses*/
vector<Bank*> Accounts;

int main() {

    /* Local Variables for main */
    int userInput, accountSize;
    
    // select user 0 < x < vectors last element

    while (true) {
        // Natural Number - 1 so then it be whole.
        accountSize = (Accounts.size() - 1);

        PrintMenu();

        /* Extract user input into userInput*/
        cin >> userInput;

        switch(userInput) {
            case 1:
                /* Create account and store it into Accounts */
                CreateAccount(Accounts);
                break;
            case 2:
                /* Checks to see if Vector is empty, if so Alert user. Otherwise, proceed */
                if(Accounts.empty()) {
                    Alert("Please create an account first", "ERROR");
                } else {
                    cout << "Select an Account 0-" << accountSize << "\n> ";
                    cin  >> CurrentlySelected;
                }
                break;
            case 3:
                if(CurrentlySelected == -2) {
                    Alert("No account is selected. Please select an account", "ERROR");
                } else {
                    Accounts[CurrentlySelected]->Withdraw();
                }
                break;
            case 4:
                if(CurrentlySelected == -2) {
                    Alert("No account is selected. Please select an account", "ERROR");
                } else {
                    Accounts[CurrentlySelected]->Deposit();
                }
                break;
            case 5:
                if(CurrentlySelected == -2) {
                    Alert("No account is selected. Please select an account", "ERROR");
                } else {
                    Accounts[CurrentlySelected]->Display();
                }
                break;
            case 6:
                system("cls");
                cout << "Goodbye, Have a good day :)";
                ExitTune();

                exit(0);
                break;
            default:
                Alert("Option does not exist." "ERROR");
                break;
        }
    }

}

void Alert(const string& message, const string &level) {
    cout << '[' << level << ']' << ' ' << message << endl;

    /* Based on level play specific beep */
    if (level == "INFO") {
        Beep(450, 150);
    } 
    else if (level == "ERROR") {
        Beep(250, 150);
        Beep(250, 150);
    }
    else if (level == "HIGH") {
        Beep(600, 100);
    } else {
        Beep(525, 500);
    }
}    

void PrintMenu() {
    cout << AsciiArt << endl;

    /* This current executable pause for 250ms*/
    this_thread::sleep_for(chrono::milliseconds(250));

    /* If an account is & isn't selected display */
    if (CurrentlySelected == -2) {
        cout << "No account selected. ";
        DoubleEndl();
    } else {
        cout << "Account Selected: " << Accounts[CurrentlySelected]->Name();
        DoubleEndl();
    }

    /* Menu Options */
    cout << "1. Create Account"       << endl
         << "2. Select Account"       << endl
         << "3. Withdraw"             << endl
         << "4. Deposit"              << endl
         << "5. Display Account Info" << endl
         << "6. Quit"                 << endl;
    cout << "Please select an option \n> ";
}

void DoubleEndl() {
    cout << endl << endl;
}

void ExitTune() {
    // C5, G4, E4, D4, C4
    Beep(523, 200);
    Beep(392, 200);
    Beep(330, 200);
    Beep(294, 400);
    Beep(262, 500);
} 