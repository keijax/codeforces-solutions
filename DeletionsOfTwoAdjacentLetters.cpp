#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string str, str2;
        cin >> str >> str2;

        bool flag = false;
        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] == str2[0] && i % 2 == 0)
            {
                flag = true;
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
