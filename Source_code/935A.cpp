#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int count = 0;


    for (int l = 2; l <= n; l++)
    {
        if (n % l == 0)
        {
            count++;
        }
    }

    // Output the result
    cout << count << endl;

    return 0;
}
