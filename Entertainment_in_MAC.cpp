#include <iostream>
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

        string str;
        cin >> str;

        string str2 = str;
        reverse(str2.begin(), str2.end());

        cout << min(str, str2 + str) << endl;
    }

    return 0;
}
