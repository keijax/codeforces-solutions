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
        vector<int> arr;

        for (int i = 0; i < 4; i++)
        {
            int x, y;
            cin >> x >> y;
            arr.push_back(x);
        }

        sort(arr.begin(), arr.end());
        int res = arr[3] - arr[0];
        cout << res * res << "\n";
    }

    return 0;
}
