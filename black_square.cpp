#include <iostream>
using namespace std;

int main()
{
    int a1, a2, a3, a4;
    int arr[4];
    for (int i = 0; i < 4; i++)
    {
        int x;
        cin >> x;
        arr[i] = x;
    }

    string s;
    cin >> s;

    int sum = 0;
    for (int i = 0; i < s.length(); i++)
    {
        int c = s[i] - '0';
        for (int j = 0; j < 4; j++)
        {
            sum += arr[c - 1];
            break;
        }
    }
    cout << sum;

    return 0;
}