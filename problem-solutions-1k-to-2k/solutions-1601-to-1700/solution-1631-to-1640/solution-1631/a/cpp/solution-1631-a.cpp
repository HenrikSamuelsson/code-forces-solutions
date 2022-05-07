// Copyright 2022 Henrik Samuelsson

#include <iostream>

uint32_t getNumberOfTestCases();

int main()
{
    uint32_t t = getNumberOfTestCases();
    std::cout << t;

    return EXIT_SUCCESS;
}

uint32_t getNumberOfTestCases()
{
    uint32_t result;
    std::cin >> result;
    return result;
}
