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

        string str;
        cin >> str;

        bool flag = true;
        for (int i = 0; i < str.length(); i++)
        {
            for (int j = i + 1; j < str.length(); j++)
            {
                if (str[i] == str[j])
                {
                    if (str[j] != str[j - 1])
                    {
                        flag = false;
                        break;
                    }
                }
            }
            if (!flag)
                break;
        }

        if (flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}