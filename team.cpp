#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int result = 0;
    for (int i = 0; i < n; i++)
    {
        int x, y, z;
        cin >> x >> y >> z;
        if (x && y || x && z || y && z == 1)
        {
            result += 1;
        }
    }
    cout << result;
}