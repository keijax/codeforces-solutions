#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        char arr[3][3];

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cin >> arr[i][j];
            }
        }

        int cnt_a = 0, cnt_b = 0, cnt_c = 0;

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (arr[i][j] == 'A')
                    cnt_a++;
                else if (arr[i][j] == 'B')
                    cnt_b++;
                else
                    cnt_c++;
            }
        }

        if (cnt_a == 2)
            cout << "A\n";
        else if (cnt_b == 2)
            cout << "B\n";
        else
            cout << "C\n";
    }

    return 0;
}