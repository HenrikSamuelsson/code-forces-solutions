#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int x;
    std::vector<int> points;

    for (size_t i = 0; i < 3; i++)
    {
        int x;
        std::cin >> x;
        points.push_back(x);
    }

   


    std::sort(points.begin(), points.end());
    
    std::cout << points[2] - points[0] << std::endl;

    return EXIT_SUCCESS;
}