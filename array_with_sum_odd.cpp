#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    int sum;
    int odd;
    int even;

    while (t--)
    {
        int n;
        cin >> n;
        sum = 0;
        odd = 0;
        even = 0;
        int arr[n];

        for (int j = 0; j < n; j++)
        {
            cin >> arr[j];
            if (arr[j] % 2 != 0 || arr[j] == 1)
                odd++;
            else
                even++;

            sum += arr[j];
        }

        if (sum % 2 != 0 || sum == 1)
            cout << "YES\n";
        else
        {
            if (odd != 0 && even != 0)
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
        }
    }

    return 0;
}