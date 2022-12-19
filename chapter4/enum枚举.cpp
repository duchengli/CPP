#include <iostream>

enum season
{
    SPRING,
    SUMMER,
    AUTUMN,
    WINTER
};
enum week
{
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY,
    SUNDAY
};

int main()
{
    using namespace std;
    week wk;
    wk = SUNDAY;
    cout << wk;

    return 0;
}