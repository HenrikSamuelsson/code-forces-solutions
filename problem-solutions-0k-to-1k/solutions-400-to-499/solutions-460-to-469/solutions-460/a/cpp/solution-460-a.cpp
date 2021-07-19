#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    
    int m;
    std::cin >> m;

    int days = 0;

    while (n > 0)
    {
        days++;
        n--;
        if (0 == days % m)
        {
            n++;
        }
    }

    std::cout << days << std::endl;

    return 0;
}
