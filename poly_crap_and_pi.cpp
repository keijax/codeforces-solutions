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
        string pi = "314159265358979323846264338327";
        int cnt = 0;
        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] == pi[i])
                cnt++;
            else
                break;
        }

        cout << cnt << endl;
    }
    return 0;
}
