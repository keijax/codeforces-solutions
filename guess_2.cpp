#include <iostream>
using namespace std;

int main()
{
    string str1, str2;
    cin >> str1 >> str2;

    int cnt = 0;

    for (int i = 0; i < str2.length(); i++)
    {
        for (int j = 0; j < str1.length(); j++)
        {
            if (str2[i] == str1[j])
            {
                cnt++;
            }
        }
    }

    cout << cnt;
}