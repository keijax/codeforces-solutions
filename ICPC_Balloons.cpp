#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int chortke[26];
        memset(chortke, 0, sizeof(chortke));

        for (int i = 0; i < n; i++)
        {
            int res = s[i] - 'A';
            chortke[res]++;
        }

        int sum = 0;
        for (int i = 0; i < 26; i++)
        {
            if (chortke[i] != 0)
            {
                sum += 2;
                chortke[i]--;
                sum += chortke[i];
            }
        }

        cout << sum << "\n";
    }

    return 0;
}
