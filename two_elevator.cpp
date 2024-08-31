#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        int cnt_a = abs(a - 1);

        int cnt_b = abs(c - 1) + abs(b - c);

        if (cnt_a < cnt_b)
            cout << 1 << "\n";
        else if (cnt_a > cnt_b)
            cout << 2 << "\n";
        else
            cout << 3 << "\n";
    }

    return 0;
}
