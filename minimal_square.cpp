#include <iostream>
using namespace std;

int main()
{
    int t, a, b;
    cin >> t;

    while (t--)
    {
        cin >> a >> b;
        if (a > b)
        {
            swap(a, b);
        }
        int side = max(a * 2, b);
        cout << side * side << "\n";
    }
    return 0;
}
