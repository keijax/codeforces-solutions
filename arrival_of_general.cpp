#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int max = arr[0];
    int min = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];

        if (arr[i] < min)
            min = arr[i];
    }

    int max_index = 0;
    int min_index = 0;
    for (int i = 0; i < n; i++)
    {
        if (min == arr[i])
            min_index = i;
    }
    for (int i = 0; i < n; i++)
    {
        if (max == arr[i])
        {
            max_index = i;
            break;
        }
    }

    int cnt;
    if (min_index < max_index)
        cnt = max_index + (n - 1 - min_index) - 1;
    else
        cnt = max_index + (n - 1 - min_index);
    cout << cnt;
}