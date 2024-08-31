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
        int num1 = 0, num2 = 0;
        for (int i = 0; i < 3; i++)
        {
            num1 += str[i] - '0';
        }

        for (int i = 3; i < 6; i++)
        {
            num2 += str[i] - '0';
        }

        if (num1 == num2)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}