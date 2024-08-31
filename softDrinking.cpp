#include <iostream>
using namespace std;

int main()
{
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int person = (k * l) / nl;
    int lime_c = c * d;
    int salt = p / np;

    int result = min(min(person, lime_c), salt) / n;
    cout << result;

    return 0;
}
