#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n % 2 == 0)
    {
        int num = 2;
        cout << num << " ";
        for (int i = 1; i < n; i++)
        {
            if (i % 2 == 0)
            {
                num += 3;
                cout << num << " ";
            }
            else
            {
                num--;
                cout << num << " ";
            }
        }
    }
    else
        cout << -1;

    return 0;
}