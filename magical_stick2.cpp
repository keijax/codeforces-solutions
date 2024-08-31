#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;
    long long arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 1)
        {
            arr[i] = (long long)(ceil(arr[i] / 2.0));
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\n";
    }
    return 0;
}
