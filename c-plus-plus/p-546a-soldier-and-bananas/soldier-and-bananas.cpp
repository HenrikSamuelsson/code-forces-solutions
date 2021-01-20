#include <iostream>

int main()
{
    long k, n, w;
    std::cin >> k >> n >> w;
    long cost = 0;
    for (long i = 1; i <= w; i++)
    {
        cost += i * k;
    }

    if (cost - n > 0)
    {
        std::cout << cost - n << std::endl;
    }
    else
    {
        std::cout << 0 << std::endl;
    }
    
    return 0;
}
