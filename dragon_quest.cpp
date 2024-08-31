#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, n, m;
        cin >> x >> n >> m;
        while (n-- && x > 20)
        {
            x = x / 2 + 10;
        }
        while (m-- && x > 0)
        {
            x = x - 10;
        }
        if (x > 0)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }

    return 0;
}