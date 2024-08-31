#include <iostream>
#include <cstring>

using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        string str;
        cin >> str;

        int chortke[26] = {0};

        for (int i = 0; i < str.length(); i++)
        {
            char c = str[i];
            chortke[c - 'a']++;
        }

        int cnt = 0;
        for (int i = 0; i < 26; i++)
        {
            if (chortke[i] % 2 != 0)
            {
                cnt++;
            }
        }

        if (cnt <= k + 1)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
