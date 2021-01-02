#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

int main()
{
    std::string string1;
    std::getline(std::cin, string1);
    std::transform(string1.begin(), string1.end(), string1.begin(), [](unsigned char c) { return std::tolower(c); });

    std::string string2;
    std::getline(std::cin, string2);
    std::transform(string2.begin(), string2.end(), string2.begin(), [](unsigned char c) { return std::tolower(c); });

    int comparison = string1.compare(string2);
    if (comparison == 0)
    {
        std::cout << "0";
    }
    else if (comparison < 0)
    {
        std::cout << "-1";
        }
        else
    {
        std::cout << "1";
    }
    
    return 0;
}
