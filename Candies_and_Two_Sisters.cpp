#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, cnt = 0;
        cin >> n;
        if (n % 2 != 0)
        {
            cnt = n / 2;
        }
        else
        {
            cnt = (n / 2) - 1;
        }
        cout << cnt << "\n";
    }

    return 0;
}
