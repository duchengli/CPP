#include <iostream>
using namespace std;
void showmenu();
void report();
void comfort();

int main()
{
    showmenu();
    char choice;
    cin >> choice;
    while (choice != 'Q' && choice != 'q')
    {
        switch (choice)
        {
        case 'a':
        case 'A':
            cout << "\a\n";
            break;
        case 'r':
        case 'R':
            report();
            break;
        case 'l':
        case 'L':
            cout << "The boss was in all day.\n";
            break;
        case 'c':
        case 'C':
            comfort();
            break;
        default:
            cout << "That's not a choice.\n";
        }
        showmenu();
        cin >> choice;
    }
    cout << "Bye!\n";
    return 0;
}

void showmenu()
{
    cout << "Please enter a/A, r/R, l/L, c/C, or q/Q:\n"
            "a/A) alarm           r/R) report\n"
            "l/L) alibi           c/C) comfort\n"
            "q/Q) quit\n";
}

void report()
{
    cout << "It's been a excellent week for business.\n"
            "Sales are up 120%. Expense are down 35%.\n";
}

void comfort()
{
    cout << "Your emplyees think you are the finest CEO\n"
            "in the industry. The board of directors think\n"
            "you are the finest CEO in the industry.\n";
}