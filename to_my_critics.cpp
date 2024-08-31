#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    string arr[t];
    for (int i = 0; i < t; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (a + b >= 10 || a + c >= 10 || b + c >= 10)
            arr[i] = "YES";
        else
            arr[i] = "NO";
    }

    for (int i = 0; i < t; i++)
    {
        cout << arr[i] << "\n";
    }
    return 0;
}