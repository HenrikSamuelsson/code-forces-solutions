#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    std::cout << n / 2 << std::endl;
    
    if (0 == n % 2)
    {
        // For even numbers we just use the prime 2.
        while (n)
        {
            std::cout << 2;
            n -= 2;
            if (n)
            {
                std::cout << ' ';
            }
        }
    }
    else
    {   
        // For odd numbers we use the prime 2 zero or more times
        // and then finally use the prime 3 one time.
        while (n != 3)
        {
            std::cout << 2;
            n -= 2;
            if (n != 3)
            {
                std::cout << ' ';
            }
        }
        std::cout << ' ' << 3;
    }

    std::cout << std::endl;

    return EXIT_SUCCESS;
}
