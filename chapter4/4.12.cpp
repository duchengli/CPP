#include <iostream>

struct inflatable
{
    char name[20];
    float volume;
    double price;
};

int main()
{
    using namespace std;
    inflatable bouquet =
        {
            "sunflowers",
            0.20,
            12.49};
    inflatable choice;
    choice = bouquet;

    cout << "bouquet: " << bouquet.name << " for $" << bouquet.price << endl;
    cout << "choice: " << choice.name << " for $" << choice.price << endl;

    inflatable guest[2] =
        {
            {"Bambi", 0.5, 21.99},
            {"Godzilla", 2000, 565.99}};

    for (int i = 0; i < 2; i++)
    {
        cout << guest[i].name << "'s price is " << guest[i].price << endl;
    }

        return 0;
}