#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, n;
        cin >> a >> b >> c >> n;

        int sum = a + b + c + n;
        int maximum = max(a, max(b, c));

        if (sum % 3 == 0 && sum / 3 >= maximum)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
