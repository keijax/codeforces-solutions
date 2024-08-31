#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string str;
        cin >> str;
        cout << str[0];
        for (int i = 1; i < str.length(); i += 2)
            cout << str[i];

        cout << "\n";
    }

    return 0;
}
