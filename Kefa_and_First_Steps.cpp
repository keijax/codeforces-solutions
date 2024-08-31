#include <iostream>
#include <string>

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

    int help = 1;
    int ans = 1;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i + 1] >= arr[i])
        {
            help++;
            ans = max(ans, help);
        }
        else
        {
            help = 1;
        }
    }

    cout << ans;

    return 0;
}