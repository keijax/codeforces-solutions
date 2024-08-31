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

        pair<int, int> arr[n];

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            arr[i].first = x;
            arr[i].second = i + 1;
        }

        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i].first == arr[(arr[i].first) - 1].second && arr[i].second == arr[(arr[i].first) - 1].first)
                cnt++;
        }

        if (cnt == 0)
            cout << 3 << endl;
        else
            cout << 2 << endl;
    }
}