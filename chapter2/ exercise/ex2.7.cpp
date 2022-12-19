#include <iostream>

void show();

int main()
{
    using namespace std;
    show();

    return 0;
}

void show()
{
    using namespace std;
    int h, m;
    cout << "Enter the number of hours: ";
    cin >> h;
    cout << "Enter the number of minutes: ";
    cin >> m;
    cout << "Time: " << h << ":" << m << endl;
}