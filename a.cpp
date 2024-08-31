#include <iostream>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        bool possible = true;
        for (int j = 0; j < n - 1; ++j) {
            if (s[j] == '1' && s[j + 1] == '1') {
                possible = false;
                break;
            }
        }
        
        if (possible) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}
