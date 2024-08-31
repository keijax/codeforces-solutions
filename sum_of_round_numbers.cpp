#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string str;
        cin >> str;
        int arr[str.length()];

        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] >= '0' && str[i] <= '9')
            {
                arr[i] = str[i] - '0';
            }
        }

        int crr = 0;
        for (int i = 0; i < str.length(); i++)
        {
            if (arr[i] != 0)
            {
                int cnt = str.length() - i - 1;
                arr[i] = arr[i] * pow(10, cnt);
                crr++;
            }
        }

        cout << crr << "\n";
        for (int i = 0; i < str.length(); i++)
        {
            if (arr[i] != 0)
            {
                cout << arr[i] << " ";
            }
        }
    }

    return 0;
}