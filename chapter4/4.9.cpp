#include <iostream>
#include <string>
#include <cstring>

int main()
{
    using namespace std;
    char charr1[20];
    char charr2[20] = "jaguar";
    string str1;
    string str2 = "panther";

    str1 = str2;
    strcpy(charr1, charr2);

    str1 += " paste";
    strcat(charr1, " juice");

    cout << "The string " << str1 << " contains " << str1.size() << " characters.\n";
    cout << "The string " << charr1 << " contains " << strlen(charr1) << " characters.\n";

    return 0;
}
