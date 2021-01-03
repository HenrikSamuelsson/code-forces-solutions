#include <iostream>

class Containers
{
    public:
    int32_t c1;
    int32_t c2;
    int32_t c3;
};

class Waste
{
    public:
    int32_t a1;
    int32_t a2;
    int32_t a3;
    int32_t a4;
    int32_t a5;
};

int main()
{
    Containers containers;
    Waste waste;

    std::string line;
    std::getline(std::cin, line);
    int32_t numberOfTestCases = std::stoi(line);
    
    for (int32_t i = 0; i < numberOfTestCases; i++)
    {
        bool result = true;
        std::cin >> containers.c1;
        std::cin >> containers.c2;
        std::cin >> containers.c3;

        std::cin >> waste.a1;
        std::cin >> waste.a2;
        std::cin >> waste.a3;
        std::cin >> waste.a4;
        std::cin >> waste.a5;

        // Sort the paper.
        if (result && containers.c1 >= waste.a1)
        {
            containers.c1 -= waste.a1;
        }
        else
        {
            result = false;
        }

        // Sort the plastic.
        if (result && containers.c2 >= waste.a2)
        {
            containers.c2 -= waste.a2;
        }
        else
        {
            result = false;
        }
        
        // Sort the general waste.
        if (result && containers.c3 >= waste.a3)
        {
            containers.c3 -= waste.a3;
        }
        else
        {
            result = false;
        }

        // Sort the wast partially made of paper.
        waste.a4 -= containers.c1;
        if (result && 0 < waste.a4)
        {
            if (containers.c3 >= waste.a4)
            {
                containers.c3 -= waste.a4;
            }
            else
            {
                result = false;
            }
        }

        // Sort the wast partially made of plastic.
        waste.a5 -= containers.c2;
        if (result && 0 < waste.a5)
        {
            if (containers.c3 >= waste.a5)
            {
                containers.c3 -= waste.a5;
            }
            else
            {
                result = false;
            }
        }

        // Present result for current test case.
         if (result)
        {
            std::cout << "YES" << std::endl;
        }
        else
        {
            std::cout << "NO" << std::endl;
        }
    }

    return 0;
}
