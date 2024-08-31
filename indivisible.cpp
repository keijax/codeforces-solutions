#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        if (n == 1)
            cout << 1;
        else if (n % 2 != 0)
            cout << -1;
        else
            for (int i = 2; i <= n; i += 2)
                cout << i << " " << i - 1 << " ";

        cout << endl;
    }

    return 0;
}