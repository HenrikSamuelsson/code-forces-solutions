#include<iostream>

int main()
{
    int numberOfStops;
    std::cin >> numberOfStops;

    int capacity = 0;
    int numberOfPassengers = 0;
    
    for (size_t i = 0; i < numberOfStops; i++)
    {
        int leaving;
        std::cin >> leaving;
        numberOfPassengers -= leaving;
        
        int entering;
        std::cin >> entering;
        numberOfPassengers += entering;
        
        if (capacity < numberOfPassengers)
        {
            capacity = numberOfPassengers;
        }
    }

    std::cout << capacity;
    
    return EXIT_SUCCESS;
}
