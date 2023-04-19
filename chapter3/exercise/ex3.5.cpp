#include <iostream>

int main()
{
    using namespace std;
    cout << "Enter the world's population:__________\b\b\b\b\b\b\b\b\b\b";
    long long wp;
    cin >> wp;
    cout << "Enter the population of the US:__________\b\b\b\b\b\b\b\b\b\b";
    long long usp;
    cin >> usp;
    double rate_d;
    float rate_f;
    rate_d = (double)usp / (double)wp * 100;
    cout << "The population of the US is " << rate_d << "% of the world population." << endl;

    rate_f = (float)usp / (float)wp * 100;
    cout << "The population of the US is " << rate_f << "% of the world population." << endl;

    return 0;
}