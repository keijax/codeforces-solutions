#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, n;
        cin >> x >> y >> n;
        int res = 0;
        res = n - n % x + y;
        if (res <= n)
            cout << res << "\n";
        else
            cout << (n - n % x - (x - y)) << "\n";
    }

    return 0;
}