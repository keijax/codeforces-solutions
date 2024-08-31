#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string str;
    getline(cin, str);

    int chortke[26];

    memset(chortke, 0, sizeof(chortke));

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            chortke[str[i] - 'a'] = 1;
    }

    int cnt = 0;
    for (int i = 0; i < 26; i++)
    {
        if (chortke[i] == 1)
            cnt++;
    }

    cout << cnt;

    return 0;
}
