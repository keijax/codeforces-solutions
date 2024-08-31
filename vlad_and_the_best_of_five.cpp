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

        int cnt_a = 0, cnt_b = 0;

        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] == 'A')
                cnt_a++;
            else
                cnt_b++;
        }

        if (cnt_a > cnt_b)
            cout << "A\n";
        else
            cout << "B\n";
    }
}