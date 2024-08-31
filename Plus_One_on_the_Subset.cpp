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

        int maxi = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] > maxi)
                maxi = arr[i];
        }

        int dis_max = 0;

        for (int i = 0; i < n; i++)
        {
            if (maxi - arr[i] > dis_max)
                dis_max = maxi - arr[i];
        }

        cout << dis_max << "\n";
    }
}