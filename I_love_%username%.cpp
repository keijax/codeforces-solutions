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
    int cnt = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            cnt++;
        }
        else if (arr[i] < min)
        {
            min = arr[i];
            cnt++;
        }
    }

    cout << cnt;

    return 0;
}