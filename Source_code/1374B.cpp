#include <iostream>
using namespace std;

int minimum_moves(int n)
{
    int moves = 0;
    while (n != 1)
    {
        if (n % 6 == 0)
        {
            n /= 6;
        }
        else if (n % 3 == 0)
        {
            n *= 2;
        }
        else
        {
            return -1; // Impossible to reach 1
        }
        moves++;
    }
    return moves;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << minimum_moves(n) << endl;
    }
    return 0;
}
