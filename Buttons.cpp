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
        if ((c % 2 == 0 && a > b) || (c % 2 != 0 && a >= b))
        {
            cout << "First" << endl;
        }
        else
        {
            cout << "Second" << endl;
        }
    }
    return 0;
}
