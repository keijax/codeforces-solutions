#include <iostream>
using namespace std;

int main()
{
    int n, counter = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] > 0)
        {
            counter++;
        }
    }
    if (counter > 0)
        cout << "Hard";
    else
        cout << "Easy";

    return 0;
}