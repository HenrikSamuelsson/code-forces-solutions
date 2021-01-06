#include <iostream>
#include <string>

int main()
{
    // Get number of test cases.
    std::string l;
    std::getline(std::cin, l);
    int t = std::stoi(l);
    
    // Loop that handles each test case.
    for (int i = 0; i < t; i++)
    {
        std::string l;
        std::getline(std::cin, l);
        if (l.length() % 2 == 0 && l[0] != ')' && l[l.length() - 1] != '(')
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
