#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int help;
        cin >> help;
        int maxi = help, mini = help;
        for (int i = 1; i < n; i++)
        {
            int x;
            cin >> x;
            if (x > maxi)
                maxi = x;
            else if (x < mini)
                mini = x;
        }

        cout << maxi - mini << endl;
    }

    return 0;
}
