#include <iostream>

int wrongSubtraction(int n)
{
    if (n % 10 == 0)
    {
        n /= 10;
    }
    else
    {
        n -= 1;
    }
    return n;
}

int main()
{
    int number;
    int times;

    std::cin >> number >> times;

    for (int i = 0; i < times; i++)
    {
        number = wrongSubtraction(number);
    }

    std::cout << number << std::endl;
}
