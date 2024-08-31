#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int k;
        cin >> k;

        int num = 1;
        while (k > 0)
        {
            if (num % 3 != 0 && num % 10 != 3)
                k--;

            num++;
        }

        cout << num - 1 << endl;
    }

    return 0;
}
