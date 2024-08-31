#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        string s;
        cin >> n >> m >> s;

        int cnt[7] = {0};

        for (int i = 0; i < s.length(); i++)
        {
            char c = s[i];
            if (c >= 'A' && c <= 'G')
            {
                cnt[c - 'A']++;
            }
        }

        int ans = 0;
        for (int i = 0; i < 7; i++)
        {
            if (cnt[i] < m)
            {
                ans += (m - cnt[i]);
            }
        }

        cout << ans << endl;
    }

    return 0;
}
