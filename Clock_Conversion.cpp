#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string str;
        cin >> str;

        string num = str.substr(0, 2);

        int res = stoi(num);

        int num2 = 12 - res;
        if (num2 < 0)
        {
            if(-(num2) < 10)
                cout << 0 << -(num2) << ":" << str.substr(3, 2) << " PM";
            else
                cout << -(num2) << ":" << str.substr(3, 2) << " PM";
        }
        else if (num2 == 0)
        {
            cout << 12 << ":" << str.substr(3, 2) << " PM";
        }
        else if (num2 == 12)
        {
            cout << 12 << ":" << str.substr(3, 2) << " AM";
        }
        else
        {
            cout << num << ":" << str.substr(3, 2) << " AM";
        }

        cout << endl;
    }

    return 0;
}
