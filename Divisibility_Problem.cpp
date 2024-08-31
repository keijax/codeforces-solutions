#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long a, b;
        cin >> a >> b;

        if (a % b == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            long long cnt = ((a / b) + 1) * b;
            cout << cnt - a << endl;
        }
    }

    return 0;
}
