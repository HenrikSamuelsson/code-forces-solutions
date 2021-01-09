#include <iostream>
#include <set>
#include <iterator>

int main(void)
{
    std::string name;
    std::getline(std::cin, name);
    std::set<char> nameSet = std::set<char>(name.begin(), name.end());
    
    if (nameSet.size() % 2 == 0)
    {
        std::cout << "CHAT WITH HER!" << std::endl;
    }
    else
    {
        std::cout << "IGNORE HIM!" << std::endl;
    }
    
    return 0;
}
