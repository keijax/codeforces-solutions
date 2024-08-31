#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        string str;
        cin >> str;
        vector<int> arr;
        for (int i = 0; i < str.length(); i++)
        {
            arr.push_back(122 - int(str[i]));
        }

        int min = arr[0];
        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] < min)
                min = arr[i];
        }

        cout << 26 - min << "\n";
    }

    return 0;
}