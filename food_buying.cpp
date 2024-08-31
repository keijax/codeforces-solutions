#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long s, ans = 0;
        cin >> s;
        while (true)
        {
            long long d = (s / 10) * 10;
            ans += d;
            long long p = s - d;
            s = (s / 10) + p;
            if (s < 10)
            {
                ans += s;
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
