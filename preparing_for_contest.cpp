#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int tmp = n;
        if (k == 0)
        {
            for (int i = n; i >= 1; i--)
            {
                cout << i << " ";
            }
            cout << endl;
        }
        else
        {
            k++;
            int ans = 1;
            while (n--)
            {
                if (k != 1)
                {
                    cout << ans << " ";
                    ans++;
                    k--;
                }
                else
                {
                    cout << tmp << " ";
                    tmp--;
                }
            }
            cout << endl;
        }
    }

    return 0;
}