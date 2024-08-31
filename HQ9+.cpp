#include <iostream>
using namespace std;

int main()
{
    string str;
    cin >> str;

    bool flag = false;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] >= 33 && str[i] <= 126)
        {
            if (str[i] == 'H' || str[i] == 'Q' || str[i] == '9')
                flag = true;
        }
    }

    if (flag)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}