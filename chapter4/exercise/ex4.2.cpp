#include <iostream>
#include <string>

int main()
{
    using namespace std;
    string name;
    char grade;
    int age;

    cout << "Enter your name: ";
    getline(cin, name);
    cout << "What letter grade do you deserve? ";
    cin >> grade;
    cout << "What is your age? ";
    cin >> age;
    grade = grade + 1;

    cout << "Name: " << name << endl;
    cout << "Grade: " << grade << endl;
    cout << "Age: " << age << endl;

    return 0;
}