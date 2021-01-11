#include <iostream>

int main()
{
    int limak;
    int bob;

    std::cin >> limak >> bob;
    int year = 0;
    for (;; year++)
    {
        if (limak > bob)
        {
            break;
        }
        limak *= 3;
        bob *= 2;
    }
    std::cout << year << std::endl;

    return 0;
}