#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (auto &c : a)
            cin >> c;

        int mx = *max_element(a.begin(), a.end() - 1);

        cout << mx + a[n - 1] << "\n";
    }
    return 0;
}
