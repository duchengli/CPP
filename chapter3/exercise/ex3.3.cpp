#include <iostream>

int main()
{
    using namespace std;
    cout << "Enter a latitude in degrees, minutes, and seconds:" << endl;
    cout << "First, enter the degrees:__\b\b";
    int degree;
    cin >> degree;
    cout << "Next, enter the minutes:__\b\b";
    int minute;
    cin >> minute;
    cout << "Finally, enter the seconds:__\b\b";
    int second;
    cin >> second;
    const int Convert = 60;
    double latitude;

    latitude = degree + double(minute) / Convert + double(second) / Convert / Convert;
    // latitude = degree + minute / Convert + second / Convert / Convert;
    cout << degree << " degrees, " << minute << " minutes, " << second << " seconds = " << latitude << " degrees." << endl;

    return 0;
}