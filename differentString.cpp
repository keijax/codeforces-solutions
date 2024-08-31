#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        bool flag = false;
        for (int i = 1; i < s.length(); i++)
        {
            if (s[i] != s[0])
            {
                swap(s[i], s[0]);
                flag = true;
                break;
            }
        }
        if (flag)
        {
            cout << "YES\n" << s << endl;
        }
        else
            cout << "NO\n";
    }
    return 0;
}
