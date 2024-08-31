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

        string str1, str2;
        cin >> str1 >> str2;

        for (int i = 0; i < n; i++)
        {
            if (str1[i] == 'G' && str2[i] == 'G')
            {
                str1[i] = str2[i] = 'B';
            }
        }

        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            if (str1[i] != str2[i] && (str1[i] == 'R' || str2[i] == 'R'))
            {
                flag = false;
                break;
            }
        }

        if (flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}