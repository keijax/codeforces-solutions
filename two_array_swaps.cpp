#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (a[i] > a[j])
                    swap(a[i], a[j]);
            }
        }

        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (b[i] < b[j])
                    swap(b[i], b[j]);
            }
        }

        for (int i = 0; i < k; i++)
        {
            if (a[i] < b[i])
                swap(a[i], b[i]);
            else
                break;
        }

        int sum = 0;
        for (int i = 0; i < n; i++)
            sum += a[i];

        cout << sum << "\n";
    }

    return 0;
}
