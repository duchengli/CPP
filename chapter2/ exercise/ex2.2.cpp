#include <iostream>

double fur2yd(double);
int main()
{
    using namespace std;
    cout << "Enter the distance measured by furlong units: ";
    double fur;
    cin >> fur;
    cout << "Convert the furlong to yard: " << endl;
    double yd;
    yd = fur2yd(fur);
    cout << fur << " furlong is " << yd << " yard." << endl;

    return 0;
}

double fur2yd(double t)
{
    return 220 * t;
}