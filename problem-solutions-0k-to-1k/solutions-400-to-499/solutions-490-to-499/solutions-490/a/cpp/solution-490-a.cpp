#include <iostream>
#include <vector>

int main()
{
    int childCount;
    std::cin >> childCount;

    std::vector<int> programmingIndexes;
    std::vector<int> mathIndexes;
    std::vector<int> peIndexes;

    for (size_t c = 1; c <= childCount; c++)
    {
        int t;
        std::cin >> t;

        if (1 == t)
        {
            programmingIndexes.push_back(c);
        }
        else if (2 == t)
        {
            mathIndexes.push_back(c);
        }
        else if (3 == t)
        {
            peIndexes.push_back(c);
        }
    }

    int min = programmingIndexes.size();
    if (min > mathIndexes.size())
    {
        min = mathIndexes.size();
    }
    if (min > peIndexes.size())
    {
        min = peIndexes.size();
    }

    if (0 == min)
    {
        std::cout << 0 << std::endl;
    }
    else
    {
        std::cout << min << std::endl;
        for (size_t i = 0; i < min; i++)
        {
            std::cout << programmingIndexes[i] << " " << mathIndexes[i] << " " << peIndexes[i] << std::endl;
        }
    }

    return EXIT_SUCCESS;
}
