#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string str1, str2, str3;
    cin >> str1 >> str2 >> str3;

    int cnt[26];
    memset(cnt, 0, sizeof(cnt));

    for (int i = 0; i < str1.length(); i++)
    {
        cnt[str1[i] - 'A']++;
    }

    for (int i = 0; i < str2.length(); i++)
    {
        cnt[str2[i] - 'A']++;
    }

    for (int i = 0; i < str3.length(); i++)
    {
        cnt[str3[i] - 'A']--;
    }

    bool flag = true;
    for (int i = 0; i < 26; i++)
    {
        if (cnt[i] != 0)
        {
            flag = false;
            break;
        }
    }

    if (flag)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
