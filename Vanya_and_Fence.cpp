#include <iostream>
using namespace std;

int main()
{
    int n, k, sum = 0;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > k)
        {
            sum += 2;
        }
        else if (arr[i] <= k)
        {
            sum += 1;
        }
    }
    cout << sum;
}