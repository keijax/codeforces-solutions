#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string str1, str2;
    cin >> str1 >> str2;

    int cnt = 0;
    for (int i = 0; i < n; i++)
        cnt += min(abs(str1[i] - str2[i]), 10 - abs(str1[i] - str2[i]));

    cout << cnt;

    return 0;
}