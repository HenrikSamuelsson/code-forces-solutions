#include <iostream>

int main()
{
    // Get number of test cases.
    int t = 0;
    std::cin >> t;

    for (size_t i = 0; i < t; i++)
    {
        // Get the length of the array for the current test case.
        int n = 0;
        std::cin >> n;

        if (0 != n % 4)
        {
            std::cout << "NO" << std::endl;             
        }
        else
        {
            std::cout << "YES" << std::endl;

            // Deduce and present the even numbers.
            for (size_t j = 1; j <= n / 2; j++)
            {
                std::cout << j * 2 << " ";
            }

            // Deduce and present the odd numbers, except the last.
            for (size_t j = 1; j < n / 2; j++)
            {
                std::cout << j * 2 - 1 << " ";
            }
            
            // Deduce and present the last odd number.
            std::cout << n - 1 + n / 2 << std::endl;
        }
    }
    return EXIT_SUCCESS;
}
