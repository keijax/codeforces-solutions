#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int arr_f[t];
    while (t--)
    {
        int n;
        cin >> n;
        int even = 0;
        int odd = 0;
        int arr[n];

        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            if (i % 2 == 0 && a % 2 != 0)
            {
                even++;
            }
            else if (i % 2 != 0 && a % 2 == 0)
            {
                odd++;
            }
        }

        if (even == odd)
        {
            cout << even << "\n";
        }
        else
            cout << -1 << "\n";
    }

    return 0;
}
