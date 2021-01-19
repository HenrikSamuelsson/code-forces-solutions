#include <iostream>

int main()
{
    
    std::string line;
    std::getline(std::cin, line);    // ignore first line
    std::getline(std::cin, line);
    char first = line[0];
    int result = 0;
    for (std::string::size_type i = 1; i < line.size(); ++i)
    {
        if (first == line[i])
        {
            result++;
        }
        first = line[i];
    }
    std::cout << result << std::endl;
    return 0;
}