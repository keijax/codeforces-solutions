#include <iostream>
using namespace std;

int main()
{
    long t;
    cin >> t;
    int arr[t];

    for (int i = 0; i < t; i++)
    {
        int n, x;
        cin >> n >> x;
        int floor = 1;
        if (n != 1)
        {
            n -= 2;
            floor += n / x;
            if (n % x != 0)
            {
                floor++;
            }
        }

        arr[i] = floor;
    }

    for (int i = 0; i < t; i++)
    {
        cout << arr[i] << "\n";
    }

    return 0;
}
