#include <iostream>
using namespace std;

int main()
{
    long long n, x;
    cin >> n >> x;

    int distress = 0;
    for (int i = 0; i < n; i++)
    {
        char str;
        cin >> str;

        int d;
        cin >> d;

        if (str == '+')
            x += d;

        else if (str == '-')
        {
            if (x >= d)
                x -= d;
            else
                distress++;
        }
    }

    cout << x << " " << distress << endl;

    return 0;
}
