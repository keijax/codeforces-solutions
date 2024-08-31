#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> programmers;
    vector<int> physics;
    vector<int> maths;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x == 1)
        {
            programmers.push_back(i + 1);
        }
        else if (x == 2)
        {
            physics.push_back(i + 1);
        }
        else
        {
            maths.push_back(i + 1);
        }
    }

    int answer = min(programmers.size(), min(physics.size(), maths.size()));

    cout << answer << "\n";

    for (int i = 0; i < answer; i++)
    {
        cout << programmers[i] << " " << physics[i] << " " << maths[i] << "\n";
    }

    return 0;
}