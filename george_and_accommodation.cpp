#include <iostream>
using namespace std;

int main()
{
    int n, p, q, counter = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> p >> q;
        if (q > p)
        {
            if (q - p >= 2)
                counter++;
        }
    }
    cout << counter;
    return 0;
}