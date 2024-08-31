#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int maxi = n;
    if (n / 10 > maxi)
        maxi = n / 10;

    if (n % 10 + (n / 100) * 10 > maxi)
        maxi = n % 10 + (n / 100) * 10;

    cout << maxi;

    return 0;
}
