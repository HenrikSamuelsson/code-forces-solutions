#include <iostream>

int main()
{
    int t;
    std::cin >> t;

    while (t--)
    {
        int h;
        std::cin >> h;

        int w;
        std::cin >> w;

        int max = w >= h ? w : h;
        int min = h >= w ? w : h;

        if (max > 2 * min)
        {
            std::cout << max * max << std::endl;
        }
        else
        {
            std::cout << min * 2 * min * 2 << std::endl;
        }
    }

    return EXIT_SUCCESS;
}
