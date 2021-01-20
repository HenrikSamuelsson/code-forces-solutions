#include<iostream>

int main()
{
    int distance;
    const int MAX_STEP = 5;

    std::cin >> distance;

    int stepCount = 0;

    // Start by taking as many long steps as possible.
    while (distance > MAX_STEP)
    {
        distance -= MAX_STEP;
        stepCount++;
    }

    // Finally if needed take one smaller step that will complete the distance.
    if (distance != 0)
    {
        stepCount++;
    }

    std::cout << stepCount << std::endl;

    return 0;
}