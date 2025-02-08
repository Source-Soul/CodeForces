#include<bits/stdc++.h>
using namespace std;

const int MOD = 1000000007;
typedef long long ll;
typedef vector<vector<ll>> Matrix;

// Function to multiply two matrices modulo MOD
Matrix multiply(const Matrix &A, const Matrix &B, int m)
{
    Matrix C(m, vector<ll>(m, 0));
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            for (int k = 0; k < m; k++)
            {
                C[i][j] = (C[i][j] + A[i][k] * B[k][j]) % MOD;
            }
        }
    }
    return C;
}

// Function to perform matrix exponentiation
Matrix power(Matrix A, ll exp, int m)
{
    Matrix res(m, vector<ll>(m, 0));
    for (int i = 0; i < m; i++) res[i][i] = 1;
    while (exp)
    {
        if (exp % 2) res = multiply(res, A, m);
        A = multiply(A, A, m);
        exp /= 2;
    }
    return res;
}

int main()
{
    ll n;
    int m, k;
    cin >> n >> m >> k;

    Matrix adj(m, vector<ll>(m, 1));

    for (int i = 0; i < k; i++)
    {
        char u, v;
        cin >> u >> v;
        int x = (islower(u) ? u - 'a' : u - 'A' + 26);
        int y = (islower(v) ? v - 'a' : v - 'A' + 26);
        adj[x][y] = 0; // Mark forbidden transitions
    }

    // Raise the transition matrix to the (n-1)th power
    Matrix result = power(adj, n - 1, m);

    // Compute the final count of valid DNA sequences
    ll total = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            total = (total + result[i][j]) % MOD;
        }
    }

    cout << total << endl;
    return 0;
}

