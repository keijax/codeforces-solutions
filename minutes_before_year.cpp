#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int hour = 1440;
    for (int i = 0; i < n; i++)
    {
        int h, m;
        cin >> h >> m;
        int res = (h * 60) + m;
        int cal = hour - res;
        arr[i] = cal;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\n";
    }

    return 0;
}