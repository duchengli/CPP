#include <iostream>

double C2F(double);

int main()
{
    using namespace std;
    cout << "Please enter a Celsius value: ";
    double C;
    cin >> C;
    double F;
    F = C2F(C);
    cout << C << " degrees Celsius is " << F << " degrees Fahrenheit." << endl;

    return 0;
}

double C2F(double t)
{
    return 1.8 * t + 32.0;
}
