#include <iostream>
#include <string>

int main()
{
    // Not that many boring numbers so can just hard code them all. 
    int boringNumbers[] = {1, 11, 111, 1111,
                           2, 22, 222, 2222,
                           3, 33, 333, 3333,
                           4, 44, 444, 4444,
                           5, 55, 555, 5555,
                           6, 66, 666, 6666,
                           7, 77, 777, 7777,
                           8, 88, 888, 8888,
                           9, 99, 999, 9999};
    
    // Get number of test cases.
    int t;
    std::cin >> t;

    while (t--)
    {    
        int n;
        std::cin >> n;

        int digits = 0;
        for (size_t i = 0; ;++i)
        {
            std::string s = std::to_string(boringNumbers[i]);
            digits += s.size();

            if (n == boringNumbers[i])
            {
                std::cout << digits << std::endl;
                break;
            }
        }
    } 
}
