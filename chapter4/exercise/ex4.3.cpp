#include <iostream>
#include <cstring>

int main()
{
    using namespace std;
    char firstname[80];
    char lastname[80];
    char fullname[80];
    cout << "Enter your first name: ";
    cin.getline(firstname, 80);
    cout << "Enter your last name: ";
    cin.getline(lastname, 80);

    strcat(lastname, ", ");
    strcat(lastname, firstname);
    cout << "Here's the information in a single string: " << lastname << endl;

    return 0;
}