#include <iostream>
#include <vector>
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
        string str;
        cin >> str;

        vector<string> cnt;
        for (int i = 1; i < n; i++)
        {
            string pair = str.substr(i - 1, 2);
            bool found = false;
            for (int j = 0; j < cnt.size(); j++)
            {
                if (cnt[j] == pair)
                {
                    found = true;
                    break;
                }
            }
            if (!found)
            {
                cnt.push_back(pair);
            }
        }

        cout << cnt.size() << endl;
    }

    return 0;
}
