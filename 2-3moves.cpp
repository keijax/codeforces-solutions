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

        int q = n / 3;

        if (n == 1)
            cout << 2 << "\n";
        else if (n % 3)
            cout << q + 1 << "\n";
        else
            cout << q << "\n";
    }

    return 0;
}
