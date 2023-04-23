#include <iostream>

struct William
{
    char brand[20];
    float diameter;
    float weight;
};

int main()
{
    using namespace std;
    William example;

    cout << "Please enter your pizza's information: " << endl;
    cout << "Brand: ";
    cin.getline(example.brand, 20);
    cout << "Diameter: ";
    cin >> example.diameter;
    cout << "Weight: ";
    cin >> example.weight;

    cout << "So the following is your pizza's information:" << endl;
    cout << "Brand: " << example.brand << ".\n";
    cout << "Diameter: " << example.diameter << "cm.\n";
    cout << "Weight: " << example.weight << "kg.\n";

    return 0;
}