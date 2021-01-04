#include <iostream>

class Forces
{
    public:
    int32_t x;
    int32_t y;
    int32_t z;
};

int main()
{
    Forces forces;
    Forces total;
    total.x = 0;
    total.y = 0;
    total.z = 0;

    std::string line;
    std::getline(std::cin, line);
    int32_t numberOfForces = std::stoi(line);
    
    for (int32_t i = 0; i < numberOfForces; i++)
    {
        std::cin >> forces.x;
        std::cin >> forces.y;
        std::cin >> forces.z;

        total.x += forces.x;
        total.y += forces.y;
        total.z += forces.z;
    }


    if (total.x == 0 && total.y == 0 && total.z == 0)
    {
        std::cout << "YES" << std::endl;
    }
    else
    {
        std::cout << "NO" << std::endl;
    }

    return 0;
}
