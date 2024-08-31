#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (a == b + c || b == a + c || c == a + b)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}