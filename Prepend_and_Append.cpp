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

        int start = 0;
        int end = str.length() - 1;

        int cnt = 0;

        while (start < end)
        {
            if (str[start] != str[end])
                cnt += 2;
            else
                break;

            start++;
            end--;
        }

        if (start > end)
            cout << 0 << "\n";
        else
            cout << end - start + 1 << "\n";
    }

    return 0;
}
