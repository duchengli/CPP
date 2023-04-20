#include <iostream>

int main()
{
    using namespace std;
    char firstname[80];
    char lastname[80];
    char grade;
    int age;

    cout << "What is your first name? ";
    cin.getline(firstname, 80);
    cout << "What is your last name? ";
    cin.getline(lastname, 80);
    cout << "What letter grade do you deserve? ";
    cin >> grade;
    cout << "What is your age? ";
    cin >> age;
    grade = grade + 1;

    cout << "Name: " << lastname << ", " << firstname << endl;
    cout << "Grade: " << grade << endl;
    cout << "Age: " << age << endl;

    return 0;
}