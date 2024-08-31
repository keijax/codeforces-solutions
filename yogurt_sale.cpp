#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, a, b;
        cin >> n >> a >> b;

        int res1 = 0;
        int res2 = 0;

        res1 = (n / 2) * b + (n % 2) * a;
        
        res2 = n * a;

        cout << min(res1, res2) << endl;
    }

    return 0;
}
