#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n, p;
    long double cnt = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> p;
        cnt += double(p) / 100;
    }
    cout << fixed << setprecision(12) << (cnt / n) * 100;
}