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
    CandyBar *snack = new CandyBar[3];

    snack[0] = {"Mocha Munch", 2.3, 350};
    snack[1] = {"Fruit Salad", 1.6, 140};
    snack[2] = {"Fried Chicken", 2.4, 800};

    cout << "The snack is following:" << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << "Brand: " << (snack + i)->brand << endl;
        cout << "Weight: " << (snack + i)->weight << endl;
        cout << "Calorie: " << (snack + i)->calorie << endl;
    }
    delete[] snack;

    return 0;
}