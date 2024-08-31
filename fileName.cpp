#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string str;
    cin >> str;

    int cnt = 0;
    int rem = 0;

    for (int i = 0; i < n; i++)
    {
        if (str[i] == 'x')
        {
            cnt++;
            if (cnt >= 3)
            {
                rem++;
            }
        }
        else
        {
            cnt = 0;
        }
    }

    cout << rem << endl;

    return 0;
}
