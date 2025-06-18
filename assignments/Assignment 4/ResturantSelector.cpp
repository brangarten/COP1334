#include <iostream>
#define ifStatement 

using namespace std;

int main() {

    bool vegetarian, vegan, gluten_free;
    char holder; // To store answer

    cout << "Is anyone in your party a vegetarian? (y/n) \n> ";
    cin >> holder;

    if (holder == 'y') {
        vegetarian = true;
    } else {
        vegetarian = false;
    }

    cout << endl;

    cout << "Is anyone in your party a vegan? (y/n) \n> ";
    cin >> holder;

    if (holder == 'y') {
        vegan = true;
    } else {
        vegan = false;
    }

    cout << endl;

    cout << "Is anyone in your party gluten-free? (y/n) \n> ";
    cin >> holder;

    if (holder == 'y') {
        gluten_free = true;
    } else {
        gluten_free = false;
    }

/*     cout << endl << vegetarian
         << endl << vegan
         << endl << gluten_free; */

    // 0 0 0 Joe's Gourmet Burger
    // 1 0 1 Main Street Pizza
    // 1 1 1 Corner Cafe
    // 1 0 0 Mama's Fine Italian
    // 1 1 1 The Chef's Kitchen

    cout << endl;
    cout << "Your best choice would be ";

    if (vegetarian == 0 && vegan == 0 && gluten_free == 0) cout << "Joe's Gourmet Burger";
    else if (vegetarian == 1 && vegan == 0 && gluten_free == 1) cout << "Main Street Pizza";
    else if (vegetarian == 1 && vegan == 1 && gluten_free == 1) cout << "Corner Café or The Chef's Kitchen";
    else if (vegetarian == 1 && vegan == 0 && gluten_free == 0) cout << "Mama's Fine Italian";

    cout << ". Enjoy your eats!";



    return 0;
}