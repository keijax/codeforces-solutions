#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, H, M;
        cin >> n >> H >> M;

        int time = H * 60 + M;

        int arr[n];
        for (int i = 0; i < n; i++)
        {
            int hour, min;
            cin >> hour >> min;
            int saat = hour * 60 + min;
            arr[i] = saat;
        }

        vector<int> res;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > time)
                res.push_back(arr[i] - time);
            else if (time > arr[i])
                res.push_back(24 * 60 - (time - arr[i]));
            else
                res.push_back(0);
        }

        sort(res.begin(), res.end());

        int fin = res[0];

        cout << fin / 60 << " " << fin % 60 << "\n";
    }
    return 0;
}
