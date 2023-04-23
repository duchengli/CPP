#include <iostream>

struct CandyBar
{
    char brand[20];
    float weight;
    int calorie;
};

int main()
{
    using namespace std;
    CandyBar snack[3] =
        {
            {"Mocha Munch", 2.3, 350},
            {"Fruit Salad", 1.6, 140},
            {"Fried Chicken", 2.4, 800}};
    cout << "The snack is following:" << endl;
    for (int i = 0; i < sizeof(snack) / sizeof(snack[0]); i++)
    {
        cout << "Brand: " << snack[i].brand << endl;
        cout << "Weight: " << snack[i].weight << endl;
        cout << "Calorie: " << snack[i].calorie << endl;
    }

    return 0;
}