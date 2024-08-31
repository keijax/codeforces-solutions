#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int res = (n - 1) / (m - 1);
    cout << n + res;

    return 0;
}