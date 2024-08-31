#include <iostream>
#include <string>
using namespace std;

int main()
{
    string n, m;
    cin >> n >> m;

    int cnt = n.length();
    string f(cnt, '0');

    for (int i = 0; i < cnt; i++)
    {
        if (n[i] == '0' && m[i] == '0')
            f[i] = '0';
        else if (n[i] == '1' && m[i] == '1')
            f[i] = '0';
        else
            f[i] = '1';
    }

    for (int i = 0; i < cnt; i++)
    {
        cout << f[i];
    }

    return 0;
}
