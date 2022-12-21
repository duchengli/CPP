#include <iostream>

int main()
{
    using namespace std;
    // cout << "sizeof(char*) = " << sizeof(char *) << endl;
    // cout << "sizeof(int*) = " << sizeof(int *) << endl;
    // cout << "sizeof(double*) = " << sizeof(double *) << endl;
    // cout << "sizeof(int**) = " << sizeof(int **) << endl;

    // cout << "--------------------------------------------" << endl;

    // int test2 = 521;
    // int *num2 = 0;
    // cout << "num2初始化为空指针：" << num2 << endl;
    // cout << "test2 : " << test2 << endl;
    // num2 = &test2;
    // cout << "num2赋值test2 : " << num2 << endl;
    // cout << "test2 : " << test2 << endl;
    // *num2 = 0;
    // cout << "num2指向的对象赋值为0：" << num2 << endl;
    // cout << "test2 : " << test2 << endl;

    // cout << "--------------------------------------------" << endl;

    // int ival = 1024;
    // int *p1 = &ival;
    // int **pp1 = &p1;

    // cout << "ival = " << ival << endl;
    // cout << "*p1 = " << *p1 << endl;
    // cout << "**pp1 = " << **pp1 << endl;

    // 指针和数组
    // string nums[] = {"one", "two", "three"};
    // string *p = &nums[0];
    // string *p2 = nums;
    // cout << "p中存放的地址：" << p << endl;
    // cout << "p2中存放的地址：" << p2 << endl;
    // cout << "p的解引用：" << *p << endl;
    // cout << "p2的解引用：" << *p2 << endl;

    // 指针和数组
    // string nums[] = {"one", "two", "three"};
    // string *p = &nums[0];
    // string *p2 = nums;
    // cout << "p中存放的地址：" << p << endl;
    // cout << "p2中存放的地址：" << p2 << endl;

    // cout << "p的解引用：" << *p << endl;
    // cout << "p2的解引用：" << *p2 << endl;

    // auto推断和decltype
    int ia[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    auto ia2(ia);
    cout << "ia2的类型：" << typeid(ia2).name() << endl;

    return 0;
}