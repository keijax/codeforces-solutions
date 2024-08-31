#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    cout << min(a, b) << " ";
    int c = abs(a - b);
    cout << c / 2;

    return 0;
}