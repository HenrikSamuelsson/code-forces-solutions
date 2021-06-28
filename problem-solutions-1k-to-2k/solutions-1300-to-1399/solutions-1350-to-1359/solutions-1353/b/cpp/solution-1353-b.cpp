#include <algorithm>
#include <iostream>
#include <vector>

int main()
{
    int testCaseCount;
    std::cin >> testCaseCount;

    while (testCaseCount--)
    {
        int n;
        std::cin >> n;
        
        int k; 
        std::cin >> k;

        std::vector<int> a(n);
        for (auto &it : a)
        {
            std::cin >> it;
        }

        // Sort vector a from smallest to greatest value.
        std::sort(a.begin(), a.end());

        std::vector<int> b(n);
        for (auto &it : b)
        {
            std::cin >> it;
        }

        // Sort vector b from greatest to smallest value.
        std::sort(b.begin(), b.end(), std::greater<>());

        int answer = 0;
        for (size_t i = 0; i < n; ++i)
        {
            if (i < k)
            {
                // Choose the maximum element from b
                // if it is larger than minimum element from a.
                answer += std::max(a[i], b[i]);
            }
            else
            {
                answer += a[i];
            }
        }

        std::cout << answer << std::endl;
    }
}