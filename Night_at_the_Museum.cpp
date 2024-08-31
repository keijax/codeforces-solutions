#include <iostream>
using namespace std;

int main()
{
    string str;
    cin >> str;
    int move = 0;

    char first = 'a';
    for (int i = 0; i < str.length(); i++)
    {
        char c = str[i];
        int walk = min(abs(first - c), abs(26 - abs(first - c)));
        move += walk;
        first = c;
    }

    cout << move;
    return 0;
}
