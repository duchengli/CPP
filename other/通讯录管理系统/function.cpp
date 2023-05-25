#include <iostream>
#include <string>
#define MAX 1000

struct Person
{
    string m_Name;
    int m_Sex;
    int m_Age;
    string m_Phone;
    string m_Addr;
};
struct Addressbooks
{
    Person personArray[MAX];
    int m_Size;
};

void showMenu()
{
    cout << "***************************" << endl;
    cout << "*****  1. 添加联系人  *****" << endl;
    cout << "*****  2. 显示联系人  *****" << endl;
    cout << "*****  3. 删除联系人  *****" << endl;
    cout << "*****  4. 查找联系人  *****" << endl;
    cout << "*****  5. 修改联系人  *****" << endl;
    cout << "*****  6. 清空联系人  *****" << endl;
    cout << "*****  0. 退出通讯录  *****" << endl;
    cout << "***************************" << endl;
}

void addPerson(Addressbooks *abs)
{
    if (abs->m_Size == MAX)
    {
        cout << "通讯录已满，无法添加" << endl;
        return;
    }
    else
    {
        string name;
        cout << "请输入姓名：" << endl;
        cin >> name;
        abs->personArray[abs->m_Size].m_Name = name;
    }
}