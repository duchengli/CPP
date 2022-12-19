#include <iostream>

const int inch_per_feet = 12;

int main()
{
    using namespace std;
    cout << "Enter your height in inches:___\b\b\b";
    int ht_inch;
    cin >> ht_inch;
    int ht_feet = ht_inch / inch_per_feet;
    int rm_inch = ht_inch % inch_per_feet;
    cout << "your height is " << ht_feet << " feet, and "
         << rm_inch << "inches.\n";

    return 0;
}