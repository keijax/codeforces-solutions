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

        if (n % 2 != 0)
        {
            if (n == 1)
                cout << "NO"
                     << "\n";
            else
                cout << "YES"
                     << "\n";
        }
        else
        {
            bool flag = false;
            while (n >= 1)
            {
                n /= 2;
                if (n % 2 != 0 && n != 1)
                {
                    flag = true;
                    break;
                }
            }

            if (flag)
                cout << "YES"
                     << "\n";
            else
                cout << "NO"
                     << "\n";
        }
    }

    return 0;
}