#include <iostream>

int main()
{
    int t;
    std::cin >> t;

    while(t--)
    {
        int n;
        std::cin >> n;

        int maxDigit = 0;
        
        while(n)
        {
            int digit = n % 10;
            if (digit > maxDigit)
            {
                maxDigit = digit;
            }
            n /= 10;
        }

        if (maxDigit == 0)
        {
            std::cout << "1" << std::endl;
        }
        else
        {
            std::cout << maxDigit << std::endl;
        }
    }

    return EXIT_SUCCESS;
}
