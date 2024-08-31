#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string str;
    cin >> str;

    sort(str.begin(), str.end());

    int left = 0;
    int right = n - 1;

    while (left < right)
    {
        if (str[left] == '0' && str[right] == '1')
        {
            str[left] = str[right] = '.';
            left++;
            right--;
        }
        else if (str[left] != '0')
        {
            left++;
        }
        else if (str[right] != '1')
        {
            right--;
        }
        else
        {
            left++;
            right--;
        }
    }

    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (str[i] != '.')
            cnt++;
    }

    cout << cnt;

    return 0;
}