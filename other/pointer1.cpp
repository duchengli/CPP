#include <iostream>
#include <typeinfo>

using namespace std;

int main()
{
    int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int *p = arr;
    cout << "p中存放的地址：" << p << endl;
    cout << "p中地址的值：" << *p << endl;

    ++p;
    cout << "++p中存放的地址：" << p << endl;
    cout << "++p中地址的值：" << *p << endl;

    int *e = &arr[9];
    for (int *b = arr; b <= e; b++)
    {
        cout << *b << endl;
    }

    return 0;
}