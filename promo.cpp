#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;

    vector<long long> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr.begin(), arr.end());

    while (q--)
    {
        int x, y;
        cin >> x >> y;

        long long sum = 0;
        for (int i = 0; i < y; i++)
        {
            sum += arr[n - x + i];
        }

        cout << sum << endl;
    }

    return 0;
}
