#include <iostream>

int main()
{
    int k;
    std::cin >> k;

    int r;
    std:: cin >> r;

    for (size_t i = 1; i <= 10; i++)
    {
        int sum = k * i;
        if ( 0 == sum % 10 || r == sum % 10)
        {
            std::cout << i << std::endl;

            // Problem solved can end program execution.
            return EXIT_SUCCESS;
        }
    }
    
    // Execution should never reach this point.
    std::cout << "There is a bug." << std::endl;

    return EXIT_FAILURE;
}
