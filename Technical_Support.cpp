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

        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (str[i] == 'Q')
                cnt++;
            else
                cnt--;
        }

        if (cnt <= 0)
            cnt = 0;

        if (cnt == 0)
            cout << "YES"
                 << "\n";
        else
            cout << "NO"
                 << "\n";
    }

    return 0;
}