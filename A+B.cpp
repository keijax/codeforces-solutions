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

        int sum = 0;
        for (int i = 0; i < 3; i++)
        {
            if (str[i] != '+')
                sum += str[i] - '0';
        }

        cout << sum << "\n";
    }

    return 0;
}