#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int x;
        cin >> x;
        if (x >= 1900)
            cout << "Division 1 \n";
        if (x >= 1600 && x <= 1899)
            cout << "Division 2 \n";
        if (x >= 1400 && x <= 1599)
            cout << "Division 3 \n";
        if (x <= 1399)
            cout << "Division 4 \n";
    }

    return 0;
}