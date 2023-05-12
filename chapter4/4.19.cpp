#include <iostream>

int main()
{
    using namespace std;

    double wages[3] = {10000.0, 20000.0, 30000.0};
    short stacks[3] = {3, 2, 1};

    double *pw = wages;
    short *ps = &stacks[0]; // or short* ps = stacks

    cout << "pw = " << pw << ", *pw = " << *pw << endl;
    pw = pw + 1;
    cout << "add 1 to the pw pointer:\n";
    cout << "pw = " << pw << ", *pw = " << *pw << "\n\n";
    cout << "ps = " << ps << ", *ps = " << *ps << endl;
    ps = ps + 1;
    cout << "add 1 to the ps pointer:\n";
    cout << "ps = " << pw << ", *ps = " << *ps << "\n\n";

    cout << "access two elements with array notation\n";
    cout << "stacks[0] = " << stacks[0] << ", stacks[1] = " << stacks[1] << endl;

    cout << "access two elements with pointer notation\n";
    cout << "*stacks = " << *stacks << ", *(stacks + 1) = " << *(stacks + 1) << endl;
    // cout << "*stacks = " << *stacks << ", *(stacks + 1) = " << *(ps + 1) << endl;

    cout << sizeof(wages) << " = size of wages array\n";
    cout << sizeof(pw) << " = size of pw pointer\n";

    cout << endl;
    short tell[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    // cout << tell << endl;
    // cout << tell + 1 << endl;
    // cout << &tell << endl;
    // cout << &tell + 1 << endl;

    short(*pas)[10] = &tell;
    for (int i = 0; i <= 9; i++)
    {
        cout << (*pas)[i] << endl;
    }

    return 0;
}