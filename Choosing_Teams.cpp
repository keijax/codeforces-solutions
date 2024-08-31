#include <iostream>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    int team = 0;
    int p = 0;
    while (n--)
    {
        int a;
        cin >> a;
        a += k;
        if (a <= 5)
            p++;
        if (p == 3)
        {
            team++;
            p = 0;
        }
    }

    cout << team;

    return 0;
}
