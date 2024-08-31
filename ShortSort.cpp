#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string str;
        cin >> str;
        bool flag = false;
        int cnt = 0;
        if (str[0] != 'a')
        {
            str[0] = 'a';
            cnt++;
        }
        if (str[1] != 'b')
        {
            str[1] = 'b';
            cnt++;
        }
        if (str[2] != 'c')
        {
            str[2] = 'c';
            cnt++;
        }
        if (cnt <= 2)
            cout << "YES"
                 << "\n";
        else
            cout << "NO"
                 << "\n";
    }

    return 0;
}
