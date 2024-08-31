#include <iostream>

using namespace std;

bool isPrime(int number)
{
    if (number <= 1)
    {
        return false;
    }

    for (int i = 2; i * i <= number; ++i)
    {
        if (number % i == 0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    int n, m;
    cin >> n >> m;
    int nextPrime = n + 1;
    while (!isPrime(nextPrime))
    {
        nextPrime++;
    }
    if (m == nextPrime)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
