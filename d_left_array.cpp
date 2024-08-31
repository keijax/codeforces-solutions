#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str1, str2;
    cin >> str1 >> str2;

    int cnt = 0;
    int str1_len = str1.length();
    int str2_len = str2.length();

    while (cnt < str1_len && cnt < str2_len && str1[str1_len - cnt - 1] == str2[str2_len - cnt - 1])
    {
        cnt++;
    }

    cout << (str1_len + str2_len - 2 * cnt) << endl;

    return 0;
}
