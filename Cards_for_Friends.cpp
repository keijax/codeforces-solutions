#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int w, h, n;
        cin >> w >> h >> n;

        int cnt = 1;
        while (w % 2 == 0)
        {
            cnt *= 2;
            w = w / 2;
        }
        while (h % 2 == 0)
        {
            cnt *= 2;
            h = h / 2;
        }

        if (cnt >= n || n == 1)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}