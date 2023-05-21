#include <iostream>
#include <string>
using namespace std;

struct student
{
    string name;
    int age;
    int score;
};

void printStudent(student stu)
{
    stu.age = 28;
    cout << "in printStudent: " << stu.name << " age: " << stu.age << " score: " << stu.score << endl;
}

void printStudent2(student *stu)
{
    stu->age = 28;
    cout << "in printStudent2: " << stu->name << " age: " << stu->age << " score: " << stu->score << endl;
}

int main()
{
    student stu = {"duchengli", 18, 100};
    printStudent(stu);
    cout << "in main name: " << stu.name << " age: " << stu.age << " score: " << stu.score << endl;
    cout << endl;

    printStudent2(&stu);
    cout << "in main name: " << stu.name << " age: " << stu.age << " score: " << stu.score << endl;

    return 0;
}