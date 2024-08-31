#include <iostream>
using namespace std;

int main()
{
    string res = "qwertyuiopasdfghjkl;zxcvbnm,./";

    char input;
    cin >> input;

    string str;
    cin >> str;

    string fin = " ";
    if (input == 'R')
    {
        for (int i = 0; i < str.length(); i++)
        {
            for (int j = 0; j < res.length(); j++)
            {
                if (str[i] == res[j])
                {
                    fin += res[j - 1];
                }
            }
        }
    }
    else
    {
        for (int i = 0; i < str.length(); i++)
        {
            for (int j = 0; j < res.length(); j++)
            {
                if (str[i] == res[j])
                {
                    fin += res[j + 1];
                }
            }
        }
    }

    for (int i = 0; i < fin.length(); i++)
    {
        cout << fin[i];
    }

    return 0;
}