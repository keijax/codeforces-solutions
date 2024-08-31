#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b, c;
        int arr[3];
        for (int i = 0; i < 3; i++)
        {
            cin >> arr[i];
        }

        int chortke[101];
        memset(chortke, 0, sizeof(chortke));

        for (int i = 0; i < 3; i++)
        {
            chortke[arr[i]]++;
        }

        for (int i = 0; i < 101; i++)
        {
            if (chortke[i] == 1)
                cout << i << "\n";
        }
    }

    return 0;
}
