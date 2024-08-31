#include <iostream>
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

        for (int i = 0; i < n - 1; i++)
            for (int j = 0; j < n - i - 1; j++)
                if (arr[j] > arr[j + 1])
                    swap(arr[j], arr[j + 1]);

        bool flag = true;

        for (int i = 1; i < n; i++)
            if (arr[i] - arr[i - 1] > 1)
                flag = false;

        if (flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
