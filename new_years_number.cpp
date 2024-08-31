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

        long long mod = n % 2020;
        long long div = n / 2020;

        if (mod <= div)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
