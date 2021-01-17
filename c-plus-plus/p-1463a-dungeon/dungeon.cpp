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
        while(totalHealth > 0 && a > 0 && b > 0 && c > 0)
        {
            totalHealth -= (6 + 3);
            a -= 1;
            b -= 1;
            c -= 1;
        }

        if (totalHealth == 0)
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