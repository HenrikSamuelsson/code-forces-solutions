#include <iostream>

int main()
{
    int t;
    std::cin >> t;

    while (t--)
    {
        int n;
        std::cin << n;

        std::vector<int> a(n);
        for (auto &it : a)
        {
            std::cin >> it;
        }

        std::vector<int> b(n);
        for (auto &it : b)
        {
            std::cin >> it;
        }
    }

    return EXIT_SUCCESS;
}