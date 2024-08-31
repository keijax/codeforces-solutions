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

    int chortke[n];
    for (int i = 0; i < n; i++)
    {
        chortke[i] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        chortke[arr[i] - 1] = i + 1;
    }
    for (int i = 0; i < n; i++)
    {
        cout << chortke[i] << " ";
    }
}