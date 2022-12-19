#include <iostream>

double convert(double);

int main()
{
    using namespace std;
    cout << "Enter the number of light years: ";
    double light_years;
    cin >> light_years;
    double astro_units;
    astro_units = convert(light_years);
    cout << light_years << " light_years = " << astro_units << " astronomical units." << endl;

    return 0;
}

double convert(double t)
{
    return 63240 * t;
}