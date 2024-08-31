#include <iostream>
using namespace std;

int main()
{
    string samuelo, roppa;
    cin >> samuelo >> roppa;

    int roppaIndex = 0;

    for (int samueloIndex = 0; samueloIndex < samuelo.length(); samueloIndex++)
    {
        if (samuelo[samueloIndex] == roppa[roppaIndex])
        {
            roppaIndex++;
        }
        if (roppaIndex == roppa.length())
        {
            cout << "YES";
            return 0;
        }
    }

    cout << "NO";
    return 0;
}
