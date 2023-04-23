#include <iostream>
#include <string>

int main()
{
    using namespace std;
    string firstname;
    string lastname;
    string fullname;
    cout << "Enter your first name: ";
    getline(cin, firstname);
    cout << "Enter your last name: ";
    getline(cin, lastname);

    fullname = lastname + ", " + firstname;
    cout << "Here's the information in a single string: " << fullname << endl;

    return 0;
}