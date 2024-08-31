#include <iostream>
#include <set>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        set<int> arr;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            arr.insert(x);
        }

        int cnt = arr.size();

        if ((n - cnt) % 2 == 0)
        {
            cout << cnt << "\n";
        }
        else
        {
            cout << cnt - 1 << "\n ";
        }
    }

    return 0;
}
