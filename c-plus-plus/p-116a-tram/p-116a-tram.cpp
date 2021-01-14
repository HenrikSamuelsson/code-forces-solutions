#include<iostream>

int main()
{
    int numberOfStops;
    std::cin >> numberOfStops;
    int capacity = 0;
    int numberOfPassengers = 0;
    for (int i = 0; i < numberOfStops; i++)
    {
        int leaving;
        std::cin >> leaving;
        int entering;
        std::cin >> entering;
        numberOfPassengers += entering;
        numberOfPassengers -= leaving;
        if (capacity < numberOfPassengers)
        {
            capacity = numberOfPassengers;
        }
    }
    std::cout << capacity;
    return 0;
}
