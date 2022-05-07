#include <iostream>
#include <math.h>

int main()
{
    int t;
    std::cin >> t;

    while(t--)
    {
        int weight1 = 0;
        int weight2 = 0;
        
        int n;
        std::cin >> n;

        if (n == 2)
        {
            weight1 = pow(2, n);
            weight2 = pow(2, n-1);  
        }
        else
        {
            for (size_t i = 0; i < n/2 - 1; ++i)
            {
                weight1 += pow(2, i + 1);
            }
            weight1 += pow(2, n);

            for (size_t i = n/2 - 1; i < n - 1; ++i)
            {
                weight2 += pow(2, i + 1);
            }
        }

        std::cout << weight1 - weight2 << std::endl;
    }
    return EXIT_SUCCESS;
}
