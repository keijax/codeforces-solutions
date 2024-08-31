#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int x;
        cin >> x;

        if (x > 45)
        {
            cout << "-1\n";
        }
        else
        {
            string str;
            for (int i = 9; i >= 1; i--)
            {
                if (x - i >= 0)
                {
                    x -= i;
                    str += to_string(i);
                }

                if (x == 0)
                    break;
            }

            reverse(str.begin(), str.end());
            cout << str << "\n";
        }
    }

    return 0;
}
