#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        int a;
        cin >> a;
        int arr[a];
        for (int i = 0; i < a; i++)
        {
            int x;
            cin >> x;
            arr[i] = x;
        }

        int res = -1;
        if (arr[0] == arr[1] && arr[0] != arr[2])
            res = 2;
        else if (arr[0] == arr[2] && arr[0] != arr[1])
            res = 1;
        else if (arr[1] == arr[2] && arr[0] != arr[1])
            res = 0;

        if (res == -1)
        {
            for (int i = 3; i < a; i++)
            {
                if (arr[i] != arr[i - 1])
                {
                    res = i;
                    break;
                }
            }
        }

        cout << res + 1 << "\n";
    }

    return 0;
}
