#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    int r[n];
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        std::cin >> r[i];
        if (r[i] == 1)
        {
            count++;
        }
    }

    if (count == 0)
    {
        std::cout << "EASY" << std::endl;
    }
    else
    {
        std::cout << "HARD" << std::endl;
    }

    return 0;
}

