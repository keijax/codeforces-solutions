#include <iostream>
using namespace std;

int main()
{
    string str1, str2;
    cin >> str1 >> str2;

    bool flag = true;

    for (int i = 0; i < str1.length(); i++)
    {
        int j = str1.length() - 1 - i;
        if (str1[i] != str2[j])
        {
            flag = false;
            break;
        }
    }

    if (flag)
        cout << "YES";
    else
        cout << "NO";
}