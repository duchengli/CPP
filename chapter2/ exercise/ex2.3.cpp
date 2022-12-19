#include <iostream>

void mice();
void see();
using namespace std;

int main()
{
    mice();
    mice();
    see();
    see();

    return 0;
}

void mice()
{
    cout << "Three blind mice" << endl;
}

void see()
{
    cout << "See how they run" << endl;
}