#include<bits/stdc++.h>
using namespace std;


int calculateFibos(int a1, int a2, int a3, int a4, int a5)
{
    int count = 0;
    if (a3 == a1 + a2) count++;
    if (a4 == a2 + a3) count++;
    if (a5 == a3 + a4) count++;
    return count;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a1, a2, a4, a5;
        cin >> a1 >> a2 >> a4 >> a5;

        int maxFibos = 0;


        for (int a3 = -100; a3 <= 200; ++a3)
        {
            int currentFibo= calculateFibos(a1, a2, a3, a4, a5);
            maxFibos = max(maxFibos, currentFibo);
        }

        cout << maxFibos << endl;
    }

    return 0;
}
