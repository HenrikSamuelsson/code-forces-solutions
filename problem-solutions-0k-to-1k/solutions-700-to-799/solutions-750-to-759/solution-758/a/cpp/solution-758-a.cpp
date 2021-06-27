#include <algorithm>
#include <iostream>
#include <vector>

int main()
{
    int n;
    std::cin >> n;

    std::vector<int> aValues;
    
    for (size_t i = 0; i < n; i++)
    {
        int a;
        std::cin >> a;
        aValues.push_back(a);
    }

    auto max = *std::max_element(aValues.begin(), aValues.end());

    int burles = 0;

    for (size_t i = 0; i < n; i++)
    {
        burles += max - aValues[i]; 
    }

    std::cout << burles << std::endl;

    return EXIT_SUCCESS;
}
