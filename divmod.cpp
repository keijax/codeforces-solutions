#include <iostream>
using namespace std;

int main()
{
    long t;
    cin >> t;

    while (t--)
    {
        long long l, r, a;
        cin >> l >> r >> a;

        long long d = r / a;
        long long m = r % a;
        long long maxResult = d + m;

        if ((d * a - 1) >= l)
        {
            long long tmp = (d - 1) + (a - 1);
            if (maxResult < tmp)
                maxResult = tmp;
        }

        cout << maxResult << endl;
    }

    return 0;
}
