#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string str;
        cin >> str;

        if ((str[0] == 'Y' || str[0] == 'y') && (str[1] == 'E' || str[1] == 'e') && (str[2] == 'S' || str[2] == 's'))
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
