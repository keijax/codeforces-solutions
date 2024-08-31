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

    int max = 0, min = 0;
    int i = 0, j = n - 1;
    while (i <= j)
    {
        if (arr[i] > arr[j])
        {
            max += arr[i];
            i++;
        }
        else
        {
            max += arr[j];
            j--;
        }
        if (i <= j)
        {
            if (arr[i] > arr[j])
            {
                min += arr[i];
                i++;
            }
            else
            {
                min += arr[j];
                j--;
            }
        }
    }

    cout << max << " " << min;
    return 0;
}
