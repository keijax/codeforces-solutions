#include <iostream>
using namespace std;

int main()
{
    int arr[4];

    for (int i = 0; i < 4; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < 4 - 1; i++)
    {
        for (int j = 0; j < 4 - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    cout << arr[3] - arr[0] << " ";
    cout << arr[3] - arr[1] << " ";
    cout << arr[3] - arr[2] << " ";

    return 0;
}
