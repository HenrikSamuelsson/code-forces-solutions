#include <iostream>
#include <string>

int main()
{
    std::string line;
    std::getline(std::cin, line);
    int lineCount = std::stoi(line);
    int x = 0;
    for (int i = 0; i < lineCount; i++)
    {
        std::getline(std::cin, line);
        if (line == "--X" || line == "X--")
        {
            x--;
        }
        else if (line == "++X" || line == "X++")
        {
            x++;
        }
        else
        {
            std::cout << "Unexpected input, terminating." << std::endl;
            return 1;
        }
    }
    std::cout << x;

    return 0;
}
