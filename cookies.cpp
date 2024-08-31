#include <iostream>
using namespace std;

int main()
{
    int n, v;
    cin >> n;

    int sum = 0, even = 0, odd = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> v;
        sum += v;

        if (v % 2 == 0)
            even++;
        else
            odd++;
    }

    if (sum % 2 == 0)
        cout << even;
    else
        cout << odd;

    return 0;
}
