#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string str;
    cin >> str;

    int anton = 0, danik = 0;

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == 'A')
        {
            anton++;
        }
        else
        {
            danik++;
        }
    }

    if (anton > danik)
        cout << "Anton";
    else if (danik > anton)
        cout << "Danik";
    else
        cout << "Friendship";

    return 0;
}
