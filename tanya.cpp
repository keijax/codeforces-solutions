#include <iostream>
using namespace std;

int main()
{
    int n, k, i = 0;
    cin >> n >> k;
    for (i; i < k; i++)
    {
        if (n % 10 != 0)
        {
            n--;
        }
        else
        {
            n = n / 10;
        }
    }
    cout << n;

    return 0;
}