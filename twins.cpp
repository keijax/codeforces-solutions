#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    sum /= 2;
    
    sort(arr.begin(), arr.end());
    int sum_2 = 0, cnt = 0;

    for (int j = n - 1; j >= 0; j--)
    {
        sum_2 += arr[j];
        cnt++;
        if (sum_2 > sum)
            break;
    }

    cout << cnt;

    return 0;
}
