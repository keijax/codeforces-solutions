#include <iostream>
using namespace std;

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long a, b, c, d;
        cin >> a >> b >> c >> d;

        long long x = a * d, y = b * c;

        if (x == y)
            cout << "0\n";
        else if (y != 0 && x % y == 0 || x != 0 && y % x == 0)
            cout << "1\n";
        else
            cout << "2\n";
    }

    return 0;
}
