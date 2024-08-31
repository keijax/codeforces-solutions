#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, cnt = 1;
    cin >> n;
    for (int i = 2; i * i < n; i++)
    {
        if (n % i == 0)
            cnt += 2;
    }

    if ((double)sqrt(n) == (int)sqrt(n))
        cnt++;

    cout << cnt << "\n";

    return 0;
}