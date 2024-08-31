#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;

        int mx = max(a, max(b, c));
        bool isTie = (a == mx) + (b == mx) + (c == mx) > 1;

        int u, v, w;
        if (a == mx)
            u = isTie;
        else
            u = mx + 1 - a;

        if (b == mx)
            v = isTie;
        else
            v = mx + 1 - b;

        if (c == mx)
            w = isTie;
        else
            w = mx + 1 - c;

        cout << u << " " << v << " " << w << endl;
    }
    return 0;
}
