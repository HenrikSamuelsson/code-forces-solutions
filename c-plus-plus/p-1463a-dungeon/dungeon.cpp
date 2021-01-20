#include <iostream>
#include <list>

int main()
{
    int t;
    int a;
    int b;
    int c;

    std::cin >> t;
    for (int i = 0; i < t; i++)
    {
        std::cin >> a >> b >> c;
        int totalHealth = a + b + c;
        int rounds = totalHealth / 9;
       
        if (totalHealth % 9 != 0)
        {
            std::cout << "NO" << std::endl;
        }
        else if (a < rounds || b < rounds || c < rounds)
        {
            std::cout << "NO" << std::endl;
        }
        else
        {
            std::cout << "YES" << std::endl;
        }
    }
    return 0;
}
