#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;

        int sum = a + b;

        if (sum & 1)
            cout << "Alice" << '\n';
        else
            cout << "Bob" << '\n';
    }

    return 0;
}
