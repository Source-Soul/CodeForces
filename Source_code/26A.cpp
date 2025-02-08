#include<bits/stdc++.h>
using namespace std;

int countPrimeFactors(int num)
{
    int count = 0;
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            count++;
            while (num % i == 0)
            {
                num /= i;
            }
        }
    }
    if (num > 1)
    {
        count++;
    }
    return count;
}

int main()
{
    int n;
    cin >> n;
    int almostPrime = 0;

    for (int i = 1; i <= n; i++)
    {
        if (countPrimeFactors(i) == 2)
        {
            almostPrime++;
        }
    }

    cout << almostPrime << endl;
    return 0;
}

