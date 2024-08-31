#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int num1 = 0, num2 = 0;

    while (t--)
    {
        int x, y;
        cin >> x >> y;

        if (x > y)
            num1++;
        else if (x < y)
            num2++;
    }

    if (num1 > num2)
        cout << "Mishka\n";
    else if (num2 > num1)
        cout << "Chris\n";
    else
        cout << "Friendship is magic!^^\n";

    return 0;
}
