#include <iostream>
using namespace std;

int main()
{
    int n = 4, cnt = 0;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        int shoe;
        cin >> shoe;
        arr[i] = shoe;
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                cnt++;
                break;
            }
        }
    }
    cout << cnt;
    return 0;
}