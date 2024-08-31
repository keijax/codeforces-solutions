#include <iostream>
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

        int cnt_b = 0;
        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] == 'B')
                cnt_b++;
        }

        if (cnt_b == 1)
        {
            cout << 1 << "\n";
        }
        else
        {
            int last_b_index = -1;

            for (int i = str.length() - 1; i >= 0; --i)
            {
                if (str[i] == 'B')
                {
                    last_b_index = i;
                    break;
                }
            }

            int first_index = 0;
            for (int i = 0; i < str.length(); i++)
            {
                if (str[i] == 'B')
                {
                    first_index = i;
                    break;
                }
            }

            cout << last_b_index - first_index + 1 << "\n";
        }
    }

    return 0;
}
