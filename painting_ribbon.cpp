#include <iostream>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;

        if (n - (n / m + (n % m != 0)) <= k)
            cout << "NO\n";
        else
            cout << "YES\n";
    }

    return 0;
}