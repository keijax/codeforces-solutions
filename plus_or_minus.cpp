#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        if (c - a > 0)
            cout << "+\n";
        else
            cout << "-\n";
    }

    return 0;
}