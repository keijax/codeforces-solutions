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

        int countB = 0;
        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] == 'B')
                countB++;
        }

        if (countB * 2 == str.length())
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
