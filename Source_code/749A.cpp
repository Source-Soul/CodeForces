#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> primes;

    if (n % 2 == 0)
    {
        for (int i = 0; i < n / 2; ++i)
        {
            primes.push_back(2);
        }
    }
    else
    {
        primes.push_back(3);
        for (int i = 0; i < (n - 3) / 2; ++i)
        {
            primes.push_back(2);
        }
    }

    cout << primes.size() << endl;
    for (int p : primes)
    {
        cout << p << " ";
    }
    cout << endl;

    return 0;
}
