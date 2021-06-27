#include <algorithm>
#include <iostream>
#include <vector>

int main()
{
    // Get number of test cases.
    int numberOfTestCases = 0;
    std::cin >> numberOfTestCases;

    // Loop through each test case.
    for (size_t testCase = 0; testCase < numberOfTestCases; testCase++)
    {
        // Get the length of the array in the current test case.
        int n = 0;
        std::cin >> n;

        // A vector to store the elements of the array.
        std::vector<int> a;

        // Read in the elements into the vector.
        for (size_t e = 0; e < n; e++)
        {
            int element = 0;
            std::cin >> element;
            a.push_back(element);
        }        
        
        std::sort(a.begin(), a.end());

        int pleasentPairs = 0;
        for (size_t i = 0; i < n - 1; i++)
        {   
            for(size_t j = i + 1; j < n; j++)
            {
                if (a[i] * a[j] >= 2 * n)
                {
                    // Array values are now so large so no need to check the rest.
                    std::cout << "break " << a[i] << " " << a[j] << std::endl;
                    break;
                }

                if (a[i] * a [j] == (i + 1) + (j + 1))
                {
                    pleasentPairs++;
                }
            }
        }
       
       std::cout << pleasentPairs << std::endl;
    }    

    return EXIT_SUCCESS;
}