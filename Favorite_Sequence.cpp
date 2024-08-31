#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> arr(n);
        vector<int> res;

        for (int i = 0; i < n; i++)
            cin >> arr[i];

        int i = 0;
        int j = n - 1;
        while (i <= j)
        {
            res.push_back(arr[i]);
            i++;
            if (i <= j)
            {
                res.push_back(arr[j]);
                j--;
            }
        }

        for (int i = 0; i < n; i++)
        {
            cout << res[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
