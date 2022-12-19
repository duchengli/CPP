#include <iostream>
#include <climits>

int main()
{
    using namespace std;
 //   int chest = 42;
 //   int waist = 0x42;
 //   int inseam = 042;

 //   cout << "Monsieur cuts a striking figure!\n";
 //   cout << "chest = " << chest << " (42 in decimal)\n";
 //   cout << "waist = " << waist << " (0x42 in hex)\n";
 //   cout << "inseam = " << inseam << " (042 in octal)\n";

    int chest = 42;
    int waist = 42;
    int inseam = 42;
    cout << "Monsieur cuts a striking figure!\n";
    cout << "chest = " << chest << " (decimal for 42)" << endl;
    cout << hex;
    cout << "waist = " << waist << " (hexadecimal for 42)" << endl;
    cout << oct;
    cout << "inseam = " << inseam << " (octal for 42)" << endl;

    return 0;
}
