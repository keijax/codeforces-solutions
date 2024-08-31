#include <iostream>
#include <vector>
#include <cstring>
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
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        int chortke[130];
        memset(chortke, 0, sizeof(chortke));

        int inc = 97;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 0)
            {
                chortke[arr[i] + inc]++;
                inc++;
            }

            else
                chortke[arr[i] + (inc - 1)]++;
        }

        vector<int> arr2;
        for (int i = 0; i < 130; i++)
        {
            if (chortke[i] != 0)
                arr2.push_back(chortke[i]);
        }

        int cnt = 97;
        for (int i = 0; i < size(arr2); i++)
        {
            for (int j = 0; j < arr2[i]; j++)
            {
                cout << char(cnt);
            }
            cnt++;
        }

        cout << endl;
    }
    return 0;
}