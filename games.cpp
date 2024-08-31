#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int home[n], guest[n];

    for (int i = 0; i < n; i++)
    {
        cin >> home[i] >> guest[i];
    }

    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i != j && home[i] == guest[j])
                cnt++;
        }
    }

    cout << cnt;

    return 0;
}
