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

        if ((c > b && c > a) && b > a)
            cout << "STAIR\n";
        else if (b > a && b > c)
            cout << "PEAK\n";
        else
            cout << "NONE\n";
    }

    return 0;
}