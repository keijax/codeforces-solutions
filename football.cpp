#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a = "0000000";
    string b = "1111111";

    string str;
    cin >> str;

    if (str.find(a) != -1 || str.find(b) != -1)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
