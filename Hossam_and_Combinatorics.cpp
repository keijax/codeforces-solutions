#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long n;
        cin >> n;

        long long arr[n];

        for (int i = 0; i < n; i++)
            cin >> arr[i];

        sort(arr, arr + n);

        if (arr[0] == arr[n - 1])
        {
            cout << (long long)n * (n - 1) << "\n";
        }
        else
        {
            int mini = 0, maxi = 0;
            for (int i = 0; i < n; i++)
            {
                if (arr[i] == arr[0])
                {
                    mini++;
                }
                else if (arr[i] == arr[n - 1])
                {
                    maxi++;
                }
            }

            cout << (long long)mini * maxi * 2 << "\n";
        }
    }

    return 0;
}
