#include <iostream>
#include <climits>

int main()
{
    using namespace std;
    cout.setf(ios_base::fixed, ios_base::floatfield);
    float hats_f, heads_f;

    cout << "Enter a number:";
    cin >> hats_f;
    cout << "Enter another number:";
    cin >> heads_f;
    cout << "hats = " << hats_f << "; heads = " << heads_f << endl;
    cout << "hats + heads = " << hats_f + heads_f << endl;
    cout << "hats - heads = " << hats_f - heads_f << endl;
    cout << "hats * heads = " << hats_f * heads_f << endl;
    cout << "hats / heads = " << hats_f / heads_f << endl;

    // double hats_d, heads_d;
    // cout << "Enter a number:";
    // cin >> hats_d;
    // cout << "Enter another number:";
    // cin >> heads_d;
    // cout << "hats = " << hats_d << "; heads = " << heads_d << endl;
    // cout << "hats + heads = " << hats_d + heads_d << endl;
    // cout << "hats - heads = " << hats_d - heads_d << endl;
    // cout << "hats * heads = " << hats_d * heads_d << endl;
    // cout << "hats / heads = " << hats_d / heads_d << endl;


    return 0;
}
