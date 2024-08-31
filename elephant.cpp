#include <iostream>
using namespace std;

int main()
{
    int x, counter = 0;
    cin >> x;
    counter = int(x) / 5;
    if (x % 5 != 0)
    {
        counter++;
    }
    cout << counter;
    return 0;
}