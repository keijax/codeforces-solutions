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
        int cnt_0 = 0, cnt_1 = 0;

        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] == '0')
                cnt_0++;
            else
                cnt_1++;
        }

        if (min(cnt_0, cnt_1) % 2 == 1)
            cout << "DA\n";
        else
            cout << "NET\n";
    }
    return 0;
}
