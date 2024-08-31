#include <iostream>
using namespace std;

int main()
{
    int n, min = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;

        min -= a;
        min += b;
        arr[i] = min;
    }
    int maximum = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > maximum)
        {
            maximum = arr[i];
        }
    }
    cout << maximum;

    return 0;
}