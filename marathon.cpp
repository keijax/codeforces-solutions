#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int a, b, c, d;
        cin >> a >> b >> c >> d;

        int cnt = 0;
        if (b > a)
            cnt++;
        if (c > a)
            cnt++;
        if (d > a)
            cnt++;

        cout << cnt << " \n";
    }
}