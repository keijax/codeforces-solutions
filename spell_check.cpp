#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string str1 = "Timur";
    sort(str1.begin(), str1.end());

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string str2;
        cin >> str2;

        sort(str2.begin(), str2.end());

        if (str1 == str2)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
