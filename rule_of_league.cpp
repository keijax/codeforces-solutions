#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, y;
        cin >> n >> x >> y;
        if (x == 0 && y == 0)
            cout << -1 << endl;
        else if (x > 0 && y > 0)
            cout << -1 << endl;
        else
        {
            if (x == 0)
                swap(x, y);

            if ((n - 1) % x == 0)
            {
                int res = (n - 1) / x;
                int cnt = 1;
                while (res--)
                {
                    for (int i = 1; i <= x; i++)
                    {
                        cout << cnt << " ";
                    }
                    if (cnt == 1)
                    {
                        cnt++;
                    }
                    cnt += x;
                }
            }
            else
            {
                cout << -1;
            }
            cout << endl;
        }
    }
    return 0;
}
