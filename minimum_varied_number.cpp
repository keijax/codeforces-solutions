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

        int cnt = 0;
        int x = n;
        while (x != 0)
        {
            x /= 10;
            cnt++;
        }

        vector<int> res;
        int num = 9;
        if (cnt > 1)
        {
            while (n > 0 && num > 0)
            {
                if (n >= num)
                {
                    n -= num;
                    res.push_back(num);
                }
                num--;
            }

            for (int i = res.size() - 1; i >= 0; i--)
            {
                cout << res[i];
            }
        }
        else
        {
            cout << n;
        }

        cout << '\n';
    }

    return 0;
}
