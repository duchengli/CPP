#include <iostream>

const int inch_per_feet = 12;
const double meter_per_inch = 0.0254;
const double pound_per_kilogram = 2.2;

int main()
{
    using namespace std;
    cout << "Please enter your height:" << endl;
    cout << "First, enter your height of feet part: ";
    int ht_feet;
    cin >> ht_feet;
    cout << "Second, enter your height of inch part: ";
    int ht_inch;
    cin >> ht_inch;
    cout << "Now, please enter your weight in pound: ";
    double wt_pound;
    cin >> wt_pound;
    int inch;
    inch = ht_feet * inch_per_feet + ht_inch;
    double ht_meter;
    ht_meter = inch * meter_per_inch;
    double wt_kilogram;
    wt_kilogram = wt_pound / pound_per_kilogram;
    cout << endl;
    cout << "Your personal body information as follow: " << endl;
    cout << "Height in inch " << inch << endl;
    cout << "Height in meter " << ht_meter << endl;
    cout << "Weight in pound " << wt_pound << endl;
    cout << "Weight in kilogram " << wt_kilogram << endl;

    double BMI;
    BMI = wt_kilogram / (ht_meter * ht_meter);
    cout << "your Body Mass Index is " << BMI << endl;

    return 0;
}