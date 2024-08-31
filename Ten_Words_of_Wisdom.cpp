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
        vector<int> arr;
        vector<int> arr2;

        while (n--)
        {
            int a, b;
            cin >> a >> b;

            arr.push_back(b);

            if (a <= 10)
            {
                arr2.push_back(b);
            }
        }

        int maxi = 0;
        int cnt = 0;

        for (int i = 0; i < arr2.size(); i++)
        {
            if (arr2[i] > maxi)
                maxi = arr2[i];
        }

        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] == maxi)
            {
                cnt = i;
                break;
            }
        }

        cout << cnt + 1 << "\n";
    }
    return 0;
}
