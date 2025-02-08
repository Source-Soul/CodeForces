#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define M_PI 3.1416

const long long M = 1e18 + 7;

long long mod(long long x)
{
    return ((x % M + M) % M);
}

long long add(long long a, long long b)
{
    return mod(mod(a) + mod(b));
}

long long mul(long long a, long long b)
{
    return mod(mod(a) * mod(b));
}

ll modPow(ll a, ll b)
{
    if (b == 0)
        return 1LL;
    if (b == 1)
        return a % M;
    ll res = 1;
    while (b)
    {
        if (b % 2 == 1)
            res = mul(res, a);
        a = mul(a, a);
        b = b / 2;
    }
    return res;
}

void solve()
{
    int n;
    cin >> n;
    ll total = 2 * 4 * 3 * modPow(4, n - 3) + (n - 3) * 4 * 3 * 3 * modPow(4, n - 4);
    cout << fixed << setprecision(10) << total;
}

int main()
{
    cout << fixed << setprecision(10);
    solve();
    return 0;
}
