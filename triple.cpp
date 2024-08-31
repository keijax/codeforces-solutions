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
            cin >> arr[i];

        sort(arr, arr + n);

        int cnt = 0;
        for (int i = 0; i < n - 2; i++)
        {
            if ((arr[i] == arr[i + 1]) && (arr[i] == arr[i + 2]))
            {
                cnt = 1;
                cout << arr[i] << "\n";
                break;
            }
        }

        if (cnt == 0)
            cout << -1 << "\n";
    }

    return 0;
}
