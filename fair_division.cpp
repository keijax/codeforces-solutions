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
        int one = 0, two = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x == 1)
                one++;
            else
                two++;
        }

        if (one % 2 == 1)
            cout << "NO";
        else if (two % 2 == 1 && one < 2)
            cout << "NO";
        else
            cout << "YES";
        cout << "\n";
    }

    return 0;
}