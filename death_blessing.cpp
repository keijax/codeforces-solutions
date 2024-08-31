#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long n;
        cin >> n;

        long long cnt_a = 0, cnt_b = 0, max_b = 0;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            cnt_a += x;
        }

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            cnt_b += x;
            if (i == 0)
                max_b = x;
            else
            {
                if (x > max_b)
                    max_b = x;
            }
        }

        long long res = (cnt_a + cnt_b) - max_b;

        cout << res << "\n";
    }

    return 0;
}