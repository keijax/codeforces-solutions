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

        int a, b;
        a = n / 3;
        b = n / 3;

        if (n % 3 == 1)
            a++;

        if (n % 3 == 2)
            b++;

        cout << a << " " << b << "\n";
    }

    return 0;
}
