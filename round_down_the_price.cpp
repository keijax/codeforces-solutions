#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int num = n;
        int cnt = 0;
        while (n != 0)
        {
            n /= 10;
            cnt++;
        }

        int result = num - pow(10, cnt - 1);
        cout << result << "\n";
    }

    return 0;
}