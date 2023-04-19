#include <iostream>

int main()
{
    using namespace std;
    cout << "Enter the number of seconds:________\b\b\b\b\b\b\b\b";
    long sec;
    cin >> sec;
    const int Min_per_sec = 60;
    const int H_per_min = 60;
    const int D_per_h = 24;

    int d, h, m, s;
    d = sec / (D_per_h * H_per_min * Min_per_sec);
    h = (sec - d * D_per_h * H_per_min * Min_per_sec) / (H_per_min * Min_per_sec);
    m = (sec - d * D_per_h * H_per_min * Min_per_sec - h * H_per_min * Min_per_sec) / Min_per_sec;
    s = (sec - d * D_per_h * H_per_min * Min_per_sec - h * H_per_min * Min_per_sec) % Min_per_sec;
    cout << sec << " seconds = " << d << " days, " << h << " hours, " << m << " minutes, " << s << " seconds" << endl;

    return 0;
}