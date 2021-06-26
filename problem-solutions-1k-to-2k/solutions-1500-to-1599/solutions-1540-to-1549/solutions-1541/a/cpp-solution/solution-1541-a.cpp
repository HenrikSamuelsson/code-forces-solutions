#include <iostream>

int main(void)
{
    // Get number of test cases.
    int t = 0;
    std::cin >> t;

    // Loop through and solve all the test cases.
    for (size_t i = 0; i < t; i++)
    {
        // Get number of cats.
        int n = 0;
        std::cin >> n;

        if (n == 2)
        {
            // Just swap the two cats.
            std::cout << "2 1";
        }
        else if (n % 2 == 1)
        {
            // Swap pair of cats until only three cats remaining.
            for (size_t j = 1; j < n - 3; j += 2)
            {
                std::cout << j + 1 << " " << j << " ";
                
            }

            std::cout << n << " " << n - 2 << " " << n - 1;
            
        }
        else
        {
            for (size_t j = 1; j < n; j += 2)
            {
                std::cout << j + 1 << " " << j;
                if (j < n - 2)
                {
                    std::cout << " ";
                }
            }
        }
        std::cout << std::endl;
    }

    return EXIT_SUCCESS;
}
