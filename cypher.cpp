#include <iostream>
#include <vector>
#include <string>
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
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        vector<int> arr2(n);
        for (int i = 0; i < n; i++)
        {
            int b;
            cin >> b;
            string str;
            cin >> str;

            int x = arr[i];
            int cnt = 0;
            for (auto i : str)
            {
                if (i == 'U')
                    cnt++;
                else
                    cnt--;
            }

            x = (x - cnt + 10) % 10;
            arr2[i] = x;
        }

        for (int i = 0; i < n; i++)
        {
            cout << arr2[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
