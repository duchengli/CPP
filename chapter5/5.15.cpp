#include <iostream>

int main()
{
    using namespace std;
    int n;

    cout << "Enter numbers in the range 1-10 to find ";
    cout << "my favorite number\n";
    do
    {
        cin >> n;
    } while (n != 7);
    cout << "Yes, 7 is my favorite.\n";

    double prices[5] = {4.99, 10.99, 6.87, 7.99, 8.49};
    for (double x : prices)
    {
        cout << x << endl;
    }
    return 0;
}