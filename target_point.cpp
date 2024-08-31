#include <iostream>
using namespace std;

int main()
{
    int score[10][10] = {
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
        {1, 2, 2, 2, 2, 2, 2, 2, 2, 1},
        {1, 2, 3, 3, 3, 3, 3, 3, 2, 1},
        {1, 2, 3, 4, 4, 4, 4, 3, 2, 1},
        {1, 2, 3, 4, 5, 5, 4, 3, 2, 1},
        {1, 2, 3, 4, 5, 5, 4, 3, 2, 1},
        {1, 2, 3, 4, 4, 4, 4, 3, 2, 1},
        {1, 2, 3, 3, 3, 3, 3, 3, 2, 1},
        {1, 2, 2, 2, 2, 2, 2, 2, 2, 1},
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1}};

    int t;
    cin >> t;

    while (t--)
    {

        int res = 0;
        for (int row = 0; row < 10; row++)
        {
            for (int col = 0; col < 10; col++)
            {
                char c;
                cin >> c;
                if (c == 'X')
                {
                    res += score[row][col];
                }
            }
        }
        cout << res << '\n';
    }

    return 0;
}
