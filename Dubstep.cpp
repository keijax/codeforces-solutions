#include <iostream>
using namespace std;

int main()
{
    string str;
    cin >> str;

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == 'W' && str[i + 1] == 'U' && str[i + 2] == 'B')
        {
            i += 2;
            cout << " ";
        }
        else
            cout << str[i];
    }

    return 0;
}
