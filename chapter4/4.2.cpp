#include <iostream>
#include <cstring>

int main()
{
    using namespace std;
    const int Size = 15;
    char name1[Size];
    char name2[Size] = "C++owboy";

    cout << "Howdy! I'm " << name2;
    cout << "! What's your name?\n";
    cin >> name1;
    cout << "Well, " << name1 << ", your name has ";
    cout << strlen(name1) << " letters and is stored\n";
    cout << "in an array of " << sizeof(name1) << " bytes.\n";
    cout << "Your initial is " << name1[0] << ".\n";
    name2[3] = '\0';
    cout << "Here are the first 3 characters of my name: ";
    cout << name2 << endl;

    char cat[] = {'f', 'a', 't', 'e', 's', 's', 'a', '\0'};
    cout << "The size of array cat is: " << sizeof(cat) << endl;
    cout << "The length of string cat is:" << strlen(cat) << endl;

    for (int i = 0; i <= 8; i++)
    {
        cout << cat[i] << endl;
    }
    cout << "Done!" << endl;

    return 0;
}
