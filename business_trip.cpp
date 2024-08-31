#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[12];
    for (int i = 0; i < 12; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + 12);

    if (n == 0)
    {
        cout << 0 << "\n";
        return 0;
    }

    reverse(arr, arr + 12);
    int res = 0;
    int step = -1;
    for (int i = 0; i < 12; i++)
    {
        res += arr[i];
        if (res >= n)
        {
            step = i + 1;
            break;
        }
    }

    cout << step << "\n";

    return 0;
}