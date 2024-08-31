#include <iostream>
using namespace std;

int main()
{
    int lower = 0, upper = 0;

    string str;
    cin >> str;

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            lower++;
        else if (str[i] >= 'A' && str[i] <= 'Z')
            upper++;
    }

    if (lower >= upper)
    {
        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] >= 'A' && str[i] <= 'Z')
                str[i] = str[i] + ('a' - 'A');
        }
    }
    else
    {
        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] >= 'a' && str[i] <= 'z')
                str[i] = str[i] - ('a' - 'A');
        }
    }

    cout << str;

    return 0;
}
