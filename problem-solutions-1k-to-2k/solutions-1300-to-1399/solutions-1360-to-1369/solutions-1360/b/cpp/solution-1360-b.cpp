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

        std::vector<int> s(n);

        for (auto &it : s)
        {
            std::cin >> it;
        }
        
        std::sort(s.begin(), s.end());
        
        int result = s[n - 1] - s[0];

		for (size_t i = 0; i < n - 1; i++) {
			for (size_t j = i + 1; j < n; j++) {
				result = std::min(result, s[j] - s[i]);
			}
		}

		std::cout << result << std::endl;
    }
    return EXIT_SUCCESS;
}
