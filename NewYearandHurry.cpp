#include <iostream>
using namespace std;

int main()
{
    int n, k, res = 5, cnt = 0;
    cin >> n >> k;

    int min_res = 240 - k;
    for (int i = 1; i <= n; i++)
    {
        if (res <= min_res)
        {
            res += (i + 1) * 5;
            cnt++;
        }
    }
    cout << cnt;
}