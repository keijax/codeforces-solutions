#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 1; i <= n; ++i)
    {
        if (i % 2 == 0)
        {
            arr[i - 1] = (i * (i / 2)) + (i / 2);
        }
        else
        {
            arr[i - 1] = i * (i - ceil(i / 2));
        }
    }
    int cnt = 0;
    int height = 0;
    for (int i = 0; i < n; i++)
    {
        if (cnt + arr[i] > n)
            break;
        else
        {
            cnt += arr[i];
            height++;
        }
    }
    cout << height;

    return 0;
}
