#include <iostream>
using namespace std;

long long funct(long long a)
{
    if (a == 0)
        return 1;

    return a * funct(a - 1);
}

int main()
{
    long long a, b;
    cin >> a >> b;

    cout << funct(min(a, b));

    return 0;
}
