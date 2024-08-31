#include <iostream>
#include <string>
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

        string res = "";

        for (int i = 0; i < n;)
        {
            res += str[i];
            char start = str[i];
            i++;
            while (i < n && str[i] != start)
            {
                i++;
            }
            i++;
        }

        cout << res << endl;
    }

    return 0;
}
