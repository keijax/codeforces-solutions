#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            int a, b;
            cin >> a >> b;
            if (a > b)
                swap(a, b);
            if ((a - b) % 2 == 0)
                cout << "Bob\n";
            else
                cout << "Alice\n";
        }
    }

    return 0;
}
