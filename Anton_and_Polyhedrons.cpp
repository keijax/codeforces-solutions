#include <iostream>
using namespace std;

int main()
{
    int n, cnt = 0;
    cin >> n;

    while (n--)
    {
        string str;
        cin >> str;
        if (str == "Icosahedron")
            cnt += 20;
        else if (str == "Cube")
            cnt += 6;
        else if (str == "Octahedron")
            cnt += 8;
        else if (str == "Dodecahedron")
            cnt += 12;
        else if (str == "Tetrahedron")
            cnt += 4;
    }

    cout << cnt;

    return 0;
}