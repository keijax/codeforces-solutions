#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int apar[36];
    int index = 0;
    for (int i = 1; i <= 9; i++)
    {
        apar[index++] = i * 1;
        apar[index++] = i * 11;
        apar[index++] = i * 111;
        apar[index++] = i * 1111;
    }
    while (t--)
    {
        int x;
        cin >> x;
        int carry = 0;
        for (int i = 0; i < 36; i++)
        {
            if (apar[i] == x)
            {
                carry = i;
                break;
            }
        }
        int sum = 0;
        for (int i = 0; i <= carry; i++)
        {
            int temp = apar[i];
            int count = 0;
            while (temp != 0)
            {
                temp /= 10;
                count++;
            }
            sum += count;
        }
        cout << sum << "\n";
    }

    return 0;
}
