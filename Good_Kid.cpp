#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            arr[i] = x;
        }

        sort(arr, arr + n);
        arr[0] += 1;

        int res = 1;
        for (int i = 0; i < n; i++)
        {
            res *= arr[i];
        }

        cout << res << "\n";
    }

    return 0;
}