#include <iostream>
#include <string>

int main()
{
    using namespace std;
    int quizscores[10] = {20, 20, 20, 20, 20, 19, 20, 18, 20, 20};
    // int quizscores[10] = {20, 20, 20, 20, 20, 20, 20, 20, 20, 20};
    cout << "Doing it right:\n";
    int i;
    for (i = 0; quizscores[i] == 20; i++)
    {
        cout << "quiz " << i << " is a 20\n";
    }

    // cout << "Doing it wrong:\n";
    // for (i = 0; quizscores[i] = 20; i++)
    // {
    //     cout << "quiz " << i << "is a 20\n";
    // }

    return 0;
}