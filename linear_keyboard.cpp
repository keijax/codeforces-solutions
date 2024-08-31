#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        string k, s;
        cin >> k >> s;

        int res = 0;
        for (int i = 1; i < s.length(); ++i)
        {
            int pos1 = -1, pos2 = -1;
            for (int j = 0; j < k.length(); ++j)
            {
                if (k[j] == s[i - 1])
                {
                    pos1 = j;
                }
                if (k[j] == s[i])
                {
                    pos2 = j;
                }
                if (pos1 != -1 && pos2 != -1)
                {
                    break;
                }
            }
            res += abs(pos2 - pos1);
        }
        cout << res << endl;
    }

    return 0;
}
