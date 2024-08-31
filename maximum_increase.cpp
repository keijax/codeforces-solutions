#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    int cnt = 1, maxcnt = 1;
    for (int i = 1; i < n; ++i)
    {
        if (a[i] > a[i - 1])
        {
            cnt++;
        }
        else
        {
            maxcnt = max(maxcnt, cnt);
            cnt = 1;
        }
    }

    maxcnt = max(maxcnt, cnt);
    cout << maxcnt;

    return 0;
}
