#include <iostream>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    long long arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    long long chortke[1001];
    for (int i = 0; i < 1001; i++)
    {
        chortke[i] = 1;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int num = arr[i] + arr[j];
            chortke[num]++;
        }
    }
    for (int i = 1; i <= n; i++)
    {
        cout << chortke[i] << "\n";
    }
    return 0;
}
