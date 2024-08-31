#include <iostream>
using namespace std;

int main()
{
    string str;
    cin >> str;

    bool flag = true;
    if (str[0] != '1')
    {
        cout << "NO";
        return 0;
    }
    for (int i = 1; i < str.length(); i++)
    {
        if (str[i] != '1' && str[i] != '4')
        {
            cout << "NO";
            return 0;
        }
    }
    for (int i = 1; i < str.length(); i++)
    {
        if ((str[i] == '4' && str[i + 1] == '4') && str[i + 2] == '4')
        {
            flag = false;
            break;
        }
    }

    if (flag)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}