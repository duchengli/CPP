#include <iostream>

using namespace std;
enum Season
{
    null,
    Summer,
    Rainy,
    Autumn,
    Winter,
    Spring
};

int main()
{
    Season season;
    cout << "What is your favorite season\n";
    cout << " 1.Summer\n";
    cout << " 2.Rainy\n";
    cout << " 3.Autumn\n";
    cout << " 4.Winter\n";
    cout << " 5.Spring\n";
    cout << "> ";
    int ch;
    cin >> ch;
    switch (ch)
    {
    case 1:
        season = Summer;
        break;
    case 2:
        season = Rainy;
        break;
    case 3:
        season = Autumn;
        break;
    case 4:
        season = Winter;
        break;
    case 5:
        season = Spring;
        break;
    default:
        season = null;
    }
    if (season == null)
        cout << "Hey, that's not a fruit!\n";
    else
        cout << "That's my favorite too!\n" << season;

    return 0;
}