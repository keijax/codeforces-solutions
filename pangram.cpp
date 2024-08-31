#include <iostream>
using namespace std;

int main()
{
    int len;
    cin >> len;
    string s;
    cin >> s;

    for (int i = 0; i < len; i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] += 'a' - 'A';
    }

    for (int i = 0; i < len - 1; i++)
    {
        for (int j = 0; j < len - i - 1; j++)
        {
            if (s[j] > s[j + 1])
            {
                char temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
            }
        }
    }

    bool flag = true;
    for (char ch = 'a'; ch <= 'z'; ch++)
    {
        bool found = false;
        for (int i = 0; i < len; i++)
        {
            if (s[i] == ch)
            {
                found = true;
                break;
            }
        }

        if (!found)
        {
            flag = false;
            break;
        }
    }

    if (flag)
        cout << "YES \n";
    else
        cout << "NO \n";

    return 0;
}
