#include <iostream>
#include <typeinfo>

using namespace std;

int main()
{
    // 对象和地址
    int n;
    double x;
    cout << "n的地址：" << &n << endl;
    cout << "x的地址：" << &x << endl;
    // 对象占用的内存空间大小
    cout << "n的内存空间大小：" << sizeof(n) << endl;
    cout << "x的内存空间大小：" << sizeof(x) << endl;
    // 对象的类型
    cout << "n的类型名：" << typeid(n).name() << endl;
    cout << "x的类型名：" << typeid(x).name() << endl;
    // 指针的基础
    int num = 35;
    int *p = &num;

    cout << "num:" << num << endl;
    cout << "地址 &num:" << &num << endl;
    cout << "解引用 *p:" << *p << endl;
    cout << "取地址 &p:" << &p << endl;
    cout << "p:" << p << endl;

    // 指针的类型
    int *p1, *p2;
    double dp, *dp2;

    cout << "p1的类型名：" << typeid(p1).name() << endl;
    cout << "p2的类型名：" << typeid(p2).name() << endl;
    cout << "dp的类型名：" << typeid(dp).name() << endl;
    cout << "dp2的类型名：" << typeid(dp2).name() << endl;
    // 指针的大小
    cout << "p1的内存空间大小：" << sizeof(p1) << endl;
    cout << "dp2的内存空间大小：" << sizeof(dp2) << endl;
    cout << "int* 的大小：" << sizeof(int *) << endl;

    return 0;
}