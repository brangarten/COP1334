#include <iostream>

using namespace std;

class Food {
  public:
    void tacoBell()
    { cout << "Heyy... Heyy.. where the taco at?"; }

    const int dollarMenuPlusTax = 2;

  private:
    void KFC()
    { "Kentuck fry chickem"; }
};

int main() {
  Food myFood;

  myFood.tacoBell();
}