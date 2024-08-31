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
        vector<int> arr(101, 0);

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            arr[x]++;
        }

        int sum = 0;

        for (int i = 0; i < 101; i++)
            sum += arr[i] / 3;

        cout << sum << endl;
    }

    return 0;
}
