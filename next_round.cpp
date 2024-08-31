#include <iostream>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int counter = 0;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        // arr[k-1]
        if (arr[i] >= arr[k - 1] && arr[i] != 0)
        {
            counter++;
        }
    }
    cout << counter;
    return 0;
}
