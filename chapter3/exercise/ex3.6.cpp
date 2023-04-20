#include <iostream>

int main()
{
    using namespace std;
    cout << "Please enter the distances(miles):";
    double m;
    cin >> m;

    cout << "Please enter volume of gasoline(gallon):";
    double g;
    cin >> g;
    cout << "The mile per garlon is " << m / g << " mpg." << endl;
    double l = g * 3.885 / (m / 62.14);
    cout << "The fuel consumption is " << l << "L/100Km." << endl;

    return 0;
}