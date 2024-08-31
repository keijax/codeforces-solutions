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
        if (n % 2)
        {
            while (n--)
                cout << 7 << " ";
            cout << endl;
        }
        else
        {
            cout << 1 << " " << 3 << " ";
            n -= 2;
            while (n--)
                cout << 2 << " ";
            cout << endl;
        }
    }

    return 0;
}