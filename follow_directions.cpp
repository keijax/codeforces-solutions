#include <iostream>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int x, y;
        int n;
        cin >> n;
        x = y = 0;
        string str;
        cin >> str;

        bool flag = false;
        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] == 'U')
                x++;
            if (str[i] == 'D')
                x--;
            if (str[i] == 'R')
                y++;
            if (str[i] == 'L')
                y--;

            if (x == 1 && y == 1)
            {
                flag = true;
                break;
            }
        }
        if (flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}