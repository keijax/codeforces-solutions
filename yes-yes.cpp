#include <iostream>
#include <string>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string x;
        cin >> x;

        string yes = "Yes";

        int index_yes = 0;

        while (index_yes < 3 && yes[index_yes] != x[0])
            index_yes++;

        if (index_yes == 3)
        {
            cout << "No\n";
        }
        else
        {
            int j = 0;

            while (j < x.length() && x[j] == yes[index_yes % 3])
            {
                j++;
                index_yes++;
            }

            if (j == x.length())
            {
                cout << "Yes\n";
            }
            else
            {
                cout << "No\n";
            }
        }
    }

    return 0;
}
