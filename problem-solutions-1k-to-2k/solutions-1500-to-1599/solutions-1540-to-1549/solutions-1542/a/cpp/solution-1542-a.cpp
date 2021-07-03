#include <iostream>

int main()
{
    int t;
    std::cin >> t;

    while (t--)
    {
        int n;
        std::cin >> n;
        int n2 = 2 * n;
        int even = 0;
        while (n2--)
        {
            int i;
            std::cin >> i;
            if (0 == i % 2)
            {
                even++;
            }
        }

        // If even equals n then there must also be n odd numbers
        // and these even and odd numbers can be paired up to have a solution.
        if (even == n)
        {
            std::cout << "Yes" << std::endl;
        }
        else
        {
            std::cout << "No" << std::endl;
        }
    }

    return EXIT_SUCCESS;
}
