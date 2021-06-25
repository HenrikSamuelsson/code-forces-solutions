#include <algorithm>
#include <iostream>       
#include <vector>

int main(void)
{
    // Vector for the values to be provided as input.
    std::vector<int> x;
    
    // Read in input, should be four positive integers.
    const int INPUT_SIZE = 4;

    for (size_t i = 0; i < INPUT_SIZE; i++)
    {
        int input = 0;
        std::cin >> input;
        x.push_back(input);
    }

    // Sort the input from the user from lowest to highest.
    std::sort(x.begin(), x.end());

    // Calculate the values to be deduced.
    int a = x[3] - x[0];    // a = (a + b + c) - (b + c)
    int b = x[3] - x[1];    // b = (a + b + c) - (a + c)
    int c = x[3] - x[2];    // c = (a + b + c) - (a + b)

    // Present the result.
    std::cout << a << " " << b << " " << c << std::endl;

    return EXIT_SUCCESS;
}
