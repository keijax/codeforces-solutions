#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        n /= 2;
        if (n % 2 != 0)
            cout << "NO\n";

        cout << "YES\n";

        for (int i = 1; i <= n; i++)
        {
            cout << i * 2 << " ";
        }

        for (int i = 1; i < n; i++)
        {
            cout << i * 2 - 1 << " ";
        }
        cout << 3 * n - 1 << "\n";
    }

    return 0;
}
