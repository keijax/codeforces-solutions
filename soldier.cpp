#include <iostream>
using namespace std;

int main()
{
    int k, n, w, sum = 0, res;
    cin >> k >> n >> w;

    for (int i = 1; i <= w; i++)
    {
        res = i * k;
        sum += res;
    }
    if (sum > n)
    {
        cout << sum - n;
    }
    else
    {
        cout << 0;
    }
    return 0;
}