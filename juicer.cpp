#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, b, d;
    cin >> n >> b >> d;

    vector<int> arr;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x <= b)
            arr.push_back(x);
    }

    int cnt = 0;
    int empty = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        cnt += arr[i];
        if (cnt > d)
        {
            empty++;
            cnt = 0;
        }
    }

    cout << empty;
}