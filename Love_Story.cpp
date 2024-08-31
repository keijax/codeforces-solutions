#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    string str = "codeforces";
    while (t--)
    {
        string str2;
        cin >> str2;

        int cnt = 0;
        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] != str2[i])
                cnt++;
        }

        cout << cnt << "\n";
    }

    return 0;
}