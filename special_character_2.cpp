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
        if (n % 2 == 1)
            cout << "NO\n";
        else
        {
            cout << "YES\n";
            int i = 0;
            while (n)
            {
                if (i % 2 == 0)
                {
                    cout << "AA";
                    i = 1;
                }
                else
                {
                    cout << "BB";
                    i = 0;
                }
                n -= 2;
            }
            cout << endl;
        }
    }

    return 0;
}