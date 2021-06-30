#include <algorithm>
#include <iostream>
#include <vector>

int main()
{
    int t;
    std::cin >> t;

    while (t--)
    {
        int n;
        std::cin >> n;

        std::vector<long long> a(n);
        for (auto &it : a)
        {
            std::cin >> it;
        }

        std::vector<long long> b(n);
        for (auto &it : b)
        {
            std::cin >> it;
        }

        auto minA = *std::min_element(a.begin(), a.end());
        auto minB = *std::min_element(b.begin(), b.end());

        long long moves = 0;
        
        for (size_t index = 0; index < n; ++index)
        {
            long long movesA = a[index] - minA;
            long long movesB = b[index] - minB;
            moves += std::max(movesA, movesB);
        }

        std::cout << moves << std::endl;
    }

    return EXIT_SUCCESS;
}
