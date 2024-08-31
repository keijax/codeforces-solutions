#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long t;
    cin >> t;

    while (t--)
    {
        long long n;
        cin >> n;

        long long cnt = 0;
        for (int i = 0; i < n; i++)
        {
            long long x;
            cin >> x;
            cnt += x;
        }

        long long res = sqrt(cnt);

        if (res * res == cnt)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}