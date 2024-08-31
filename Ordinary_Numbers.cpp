#include <iostream>
using namespace std;

int main()
{
    int t;
	cin>>t;

    while(t--)
	{
    	long long n, cnt=0, start;
    	cin >> n;
    	for(int i=1; i<=9; i++)
    	{
    		start=i;
    		while(start<=n)
    		{
    			cnt++;
    			start=start*10+i;
			}
		}
		cout << cnt << "\n";
    }

    return 0;
}