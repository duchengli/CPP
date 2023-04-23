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
    CandyBar snack =
        {
            "Mocha Munch",
            2.3,
            350};
    cout << "The snack is following:" << endl;
    cout << "Brand: " << snack.brand << endl;
    cout << "Weight: " << snack.weight << endl;
    cout << "Calorie: " << snack.calorie << endl;
    return 0;
}