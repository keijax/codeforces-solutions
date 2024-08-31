#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    int max_count = 0;
    string max_two_gram;

    for (int i = 0; i < n - 1; i++)
    {
        string two_gram = s.substr(i, 2);
        int cnt = 0;

        for (int j = 0; j < n - 1; j++)
        {
            if (s.substr(j, 2) == two_gram)
            {
                cnt++;
            }
        }

        if (cnt > max_count)
        {
            max_count = cnt;
            max_two_gram = two_gram;
        }
    }

    cout << max_two_gram;

    return 0;
}
