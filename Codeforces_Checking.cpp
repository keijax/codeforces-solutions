#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    string str = "codeforces";
    while (t--)
    {
        char ch;
        cin >> ch;

        bool flag = false;
        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] == ch)
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