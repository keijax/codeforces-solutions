#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, a, b;
        cin >> n >> a >> b;

        vector<char> str;

        if (a == b)
        {
            char init = 'a';
            for (int i = 0; i < n; i++)
            {
                str.push_back(init);
                init++;
                if (init > 'z')
                {
                    init = 'a';
                }
            }
        }
        else if (n == a)
        {
            char init = 'a';
            for (int i = 0; i < n; i++)
            {
                str.push_back(init);
            }
        }
        else
        {
            char init = 'a';
            int cnt = 0;
            for (int i = 0; i < n; i++)
            {
                str.push_back(init);
                init++;
                cnt++;
                if (cnt == b)
                {
                    cnt = 0;
                    init = 'a';
                }
                if (init > 'z')
                {
                    init = 'a';
                }
            }
        }

        for (int i = 0; i < str.size(); i++)
        {
            cout << str[i];
        }
        cout << endl;
    }

    return 0;
}
