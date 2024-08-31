#include <iostream>
using namespace std;

int main()
{
    int n, cnt = 0;
    cin >> n;
    int arr[5] = {1, 5, 10, 20, 100};

    for (int i = 4; i >= 0; i--)
    {
        while (n - arr[i] >= 0)
        {
            n -= arr[i];
            cnt++;
        }
    }

    cout << cnt;
    return 0;
}
