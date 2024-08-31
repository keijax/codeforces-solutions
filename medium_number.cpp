#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (a > b)
        {
            swap(a, b);
        }
        if (a > c)
        {
            swap(a, c);
        }
        if (b > c)
        {
            swap(b, c);
        }
        arr[i] = b;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\n";
    }
    return 0;
}