#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;
        int n = s.size();

        bool k = false;
        if (n % 2 == 0)
        {
            for (int i = 0; i < n / 2; i++)
            {
                if (s[i] != s[n / 2 + i])
                {
                    k = true;
                    break;
                }
            }

            if (k)
                cout << "NO\n";
            else
                cout << "YES\n";
        }
        else
            cout << "NO\n";
    }

    return 0;
}
