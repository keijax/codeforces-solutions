#include <iostream>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    int cnt = 0;
    while (n != 0)
    {
        int num = n % 10;
        if (num == 4 || num == 7)
        {
            cnt++;
        }
        n /= 10;
    }

    if (cnt == 4 || cnt == 7)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
