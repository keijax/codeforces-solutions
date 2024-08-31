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
        for (int i = 0; i < 3; i++)
        {
            int x;
            cin >> x;
            arr.push_back(x);
        }

        sort(arr.begin(), arr.end());

        cout << arr[2] - arr[0] << endl;
    }

    return 0;
}