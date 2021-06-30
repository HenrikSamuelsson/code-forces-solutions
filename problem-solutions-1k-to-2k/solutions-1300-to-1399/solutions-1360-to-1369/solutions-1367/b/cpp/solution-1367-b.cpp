#include <iostream>

int main()
{
    // Get number of testcases.
    int t;
    std::cin >> t;

    // Go through all the testcases while still test cases left.
    while (t--)
    {
        // Get the number size of the input.
        int n;
        std::cin >> n;

        int oddBadInputCount = 0;  // Tracks how many of the bad input numbers that are odd.
        int evenBadInputCount = 0; // Tracks how many of the bad input numbers tha are even.
        int badParityCount = 0; // Tracks how many of the input number that have bad parity.

        for (size_t i = 0; i < n; ++i)
        {
            // Get next input number.
            int ai;
            std::cin >> ai;

            // Check if there is a missmatch between the parity of the index
            // and the parity of the number.
            if (ai % 2 != i % 2)
            {
                badParityCount++;
                // Check if the current input number is odd or even.
                if (0 == ai % 2)
                {
                    evenBadInputCount++;
                }
                else
                {
                    oddBadInputCount++;
                }
            }
        }

        // Is the array already good?
        if (0 == badParityCount)
        {
            std::cout << "0" << std::endl;
        }
        // Is it possible to swap to make the array good?
        else if (0 == badParityCount % 2 && evenBadInputCount == oddBadInputCount)
        {
            std::cout << evenBadInputCount << std::endl;
        }
        else
        {
            std::cout << "-1" << std::endl;
        }
    }

    return EXIT_SUCCESS;
}
