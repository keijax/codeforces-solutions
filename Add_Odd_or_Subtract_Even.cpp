#include <iostream>
using namespace std;
int main()
{
    int t;

    cin >> t;
    while (t--)
    {
        long long int a, b, cnt, sub;
        cnt = sub = 0;
        cin >> a >> b;

        if (a == b)
            cnt = 0;

        if (a > b)
        {
            sub = a - b;
            cnt++;
            if (sub % 2 != 0)
                cnt++;
        }
        if (a < b)
        {
            sub = b - a;
            cnt++;
            if (sub % 2 != 1)
                cnt++;
        }
        cout << cnt << "\n";
    }
    return 0;
}