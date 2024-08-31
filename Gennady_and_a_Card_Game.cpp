#include <iostream>
using namespace std;

int main()
{
    string str;
    cin >> str;

    bool flag = false;
    for (int i = 0; i < 5; i++)
    {
        string str2;
        cin >> str2;
        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] == str2[i])
                flag = true;
        }
    }

    if (flag)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}