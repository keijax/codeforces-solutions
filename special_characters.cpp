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

        if (n != 1)
        {
            cout << "YES" << endl;
            if (n % 2 != 0)
            {
                int help = n / 2;
                bool flag = true;
                for (int i = 0; i < n - 1; i += 2)
                {
                    if (flag)
                    {
                        cout << "AA";
                        flag = false;
                    }
                    else
                    {
                        cout << "BB";
                        flag = true;
                    }
                }
                if (help % 2 == 0)
                    cout << 'A';
                else
                    cout << 'B';

                cout << endl;
            }
            else
            {
                bool flag = true;
                for (int i = 0; i < n - 1; i += 2)
                {
                    if (flag)
                    {
                        cout << "AA";
                        flag = false;
                    }
                    else
                    {
                        cout << "BB";
                        flag = true;
                    }
                }
                cout << endl;
            }
        }
        else
            cout << "NO\n";
    }
    return 0;
}