#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int levels[101] = {0};

    int p, x;
    cin >> p;
    for (int i = 0; i < p; i++)
    {
        cin >> x;
        levels[x] = 1;
    }

    int q, y;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        cin >> y;
        levels[y] = 1;
    }

    bool pass = true;
    for (int i = 1; i <= n; i++)
    {
        if (levels[i] == 0)
        {
            pass = false;
            break;
        }
    }
    
    if (pass)
    {
        cout << "I become the guy." << endl;
    }
    else
    {
        cout << "Oh, my keyboard!" << endl;
    }

    return 0;
}
