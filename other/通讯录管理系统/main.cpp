#include <iostream>
#include "function.cpp"

using namespace std;

main()
{
    int select = 0;
    while (true)
    {
        showMenu();
        cin >> select;
        switch (select)
        {
        case 1:
            cout << "添加联系人" << endl;
            break;
        case 2:
            cout << "显示联系人" << endl;
            break;
        case 3:
            cout << "删除联系人" << endl;
            break;
        case 4:
            cout << "查找联系人" << endl;
            break;
        case 5:
            cout << "查找联系人" << endl;
            break;
        case 6:
            cout << "清空联系人" << endl;
            break;
        case 0:
            cout << "欢迎下次使用" << endl;
            return 0;
            break;
        default:
            break;
        }
    }

    return 0;
}
