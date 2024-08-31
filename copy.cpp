#include <iostream>
#include <set>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a;
        set<int> arr;
        while (a--)
        {
            int b;
            cin >> b;
            arr.insert(b);
        }
        cout << arr.size() << endl;
    }
    return 0;
}
